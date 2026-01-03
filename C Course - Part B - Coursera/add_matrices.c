#include <stdio.h>
#include <math.h>

#define ROWS 3
#define COLUMNS 3

typedef struct{

    int m[ROWS][COLUMNS];
    int row_size;
    int column_size; 
}Matrix;

int add(Matrix *a, Matrix *b, Matrix *c, Matrix *result) {

    for (int i = 0; i < (a -> row_size); ++i) {
        for (int j = 0; j < (a -> column_size);++j) {
            result->m[i][j] = a->m[i][j] + b->m[i][j] + c->m[i][j];
        }
    }
}

void printMatrix(Matrix m) {
    for (int i = 0; i < m.row_size; i++) {
        for (int j = 0; j < m.column_size; j++) {
            printf("%d ", m.m[i][j]);
        }
        printf("\n");
    }
}

int main() {

    Matrix a = {
        .m = { 
            {1,2,3},
            {1,2,3},
            {1,2,3},
        },
        .row_size = ROWS,
        .column_size = COLUMNS
    };

    Matrix b = {
        .m = { 
            {1,2,3},
            {1,2,3},
            {1,2,3},
        },
        .row_size = ROWS,
        .column_size = COLUMNS
    };

    Matrix c = {
        .m = { 
            {1,2,3},
            {1,2,3},
            {1,2,3},
        },
        .row_size = ROWS,
        .column_size = COLUMNS
    };

    Matrix result = {0};

    result.row_size = ROWS;
    result.column_size = COLUMNS;

    //add(&a,&b,&c,&result);
    //printMatrix(result);

    //printf("%d %d",add(&a,&b,&c,&result));

    Matrix *ptr_to_a = &a;
    printf("\n%d",ptr_to_a -> row_size);

}
