#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11

typedef enum { before, after} when;

void fill_array(double *a, int n) {

    int i;
    srand(time(NULL)); /*seed rand()*/
    for (i = 0; i < n; ++i) {
        a[i] = (rand() % 1001)/10.0;
    }
}

int cmp(const void *p,const void *q) {

    const double *pp = (const double *)p;
    const double *qq = (const double *)q;
    double diff = (*pp - *qq);

    if (diff > 0.0) {
        return 1;
    }
    else if (diff == 0) {
        return 0;
    }
    else return -1;
}


void prntarray(when val, double *a, int n) {
    if (val == before) {
        printf("Before Sorting: \n");
    }
    else printf("After Sorting: \n");
    
    for (int i = 0; i < n; ++i) {
        printf("%lf ",a[i]);
    }
    printf("\n");
}

int main() {

    double a[N];

    fill_array(a,N);
    prntarray(before,a,N);
    qsort(a,N,sizeof(double),cmp);
    prntarray(after,a,N);

}

