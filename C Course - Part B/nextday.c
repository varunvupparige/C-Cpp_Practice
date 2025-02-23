#include <stdio.h>

typedef enum month { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec }month;

typedef struct date{
    month m;
    int d;
}date;

date next_day(date *a) {

    date b;

    if ((a->m) == 12 && (a->d) == 31) {
        b.m = jan; b.d =1;
        return b;
    }
    else if ((a->m) == 2 && (a->d) == 28) {
        b.m = mar; b.d = 1;
        return b;
    }
    else if (((a->m) <=  7) && ((a->m % 2) == 1) && (a->d == 31)) {
        b.m = (a -> m)++; b.d = 1;
        return b;
    }
    else if (((a->m) <=  7) && ((a->m % 2) == 0) && (a->d == 30)) {
        b.m = (a -> m)++; b.d = 1;
        return b;
    }
    else if (((a->m) >  7) && ((a->m % 2) == 0) && (a->d == 31)) {
        b.m = a -> m++; (b.d = 1);
        return b;
    }
    else if (((a->m) >  7) && ((a->m % 2) == 0) && (a->d == 31)) {
        b.m = a -> m++; (b.d = 1);
        return b;
    }
    else { 
        b.m = a->m++; b.d = a->d++;
        return b;
    }
}


int main() {

    date date1 = {jan, 28};
    date nextdate;
    nextdate = next_day(&date1);
    printf("%d %d \n",nextdate.m,nextday.d);

}