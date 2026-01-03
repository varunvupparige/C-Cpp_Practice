#include <stdio.h>
#include <time.h>

#define TOT_MONTHS 12

typedef enum month{ jan, feb, mar, apr, may, june, july, aug, sep, oct, nov, dec} month;

typedef struct {
    month mnth;
    int day;
}date;


date next_day(date *d) {
    
    date next_day;
    if (d->day == 31 && d->mnth == dec) {
        next_day.mnth = jan; next_day.day = 01;
        return next_day;
    }
    else if (d->day == 28 && d->mnth == feb) {
        next_day.mnth = mar; next_day.day = 01;
        return next_day;
    }
    else if (d->day == 30 && (d->mnth == apr || d->mnth == june || d->mnth == sep || d->mnth == nov)) {
        next_day.mnth = (month)(d->mnth + 1); next_day.day = 01;
        return next_day;
    }
    else if (d->day == 31 && (d->mnth == jan || d->mnth == mar || d->mnth == may || d->mnth == july || d->mnth == aug || d->mnth == oct)) {
        next_day.mnth = (month)(d->mnth + 1); next_day.day = 01;
        return next_day;
    }
    else {
        next_day.mnth = (month)(d->mnth + 0); next_day.day = (d->day + 1);
        return next_day;
    }

}


int main() {


    date random_dates[4] = {{feb,28},{mar,14},{oct,31},{dec,31}};
    date next_dates[4];

    for (int i = 0; i < 4; i++) {

        next_dates[i] = next_day(&random_dates[i]);
        printf("No. %d date is %d/%d \n",i,(int)next_dates[i].mnth+1,next_dates[i].day);

    }
}