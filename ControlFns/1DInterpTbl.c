#include <stdio.h>

typedef struct InterpTbl {
    double x;
    double y;
}InterpTbl;


double OneDInterpFn(double x, InterpTbl tbl[], int size) {

    if (x < tbl[0].x) return tbl[0].y;
    if (x > tbl[size-1].x) return tbl[size-1].y;

    for (int i = 0; i < size; ++i) {
        if (x == tbl[i].x) return (tbl[i].y);
        if ((x > tbl[i].x) && (x < tbl[i+1].x)) {
            int x0 = tbl[i].x; int y0 = tbl[i].y;
            int x1 = tbl[i+1].x; int y1 = tbl[i+1].y;
            return (y0 + (x-x0)*(y1-y0)/(x1-x0));
        }    
    }
    return 0; 
}

int main() {

    InterpTbl Example[] = {
                            {0, 20},
                            {1, 40},
                            {2, 50},
                            {3, 75},
                            {5, 100},
                            {6, 105}
    };

    int size = sizeof(Example)/sizeof(Example[0]);
    printf("Size is %d \n",size);

    double data[] = {0.5, 4, 6, 10, -5};

    for (int i = 0; i < sizeof(data)/sizeof(data[0]); ++i) {
        double ydata = OneDInterpFn(data[i],Example,size);
        printf("X is %lf, then 1D Table outputs %lf \n",data[i],ydata);
    }


}