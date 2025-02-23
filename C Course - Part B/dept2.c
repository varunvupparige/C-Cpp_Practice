#include <stdio.h>
#include <stdlib.h>

#define SSN_MIN 100000
#define SSN_MAX 999999

#define BASE 15000
#define SALARY_MIN 1000
#define SALARY_MAX 2000

#define T 10


typedef enum { HR, Sales, Research, Software, Executive}dept;
typedef unsigned int uint;
typedef struct { dept name; int ann_salary; uint ssn; }emply_data;

void gen_ssn(emply_data data[], int size) {

    for (int i = 0; i < size; i++) {
        data[i].ssn = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN;
    }
}

void gen_salary(emply_data *data,int size) {

    for (int i = 0; i < size; i++) {

        switch (data[i].name) 
        {
            case HR: data[i].ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*0.9;
                break;
            case Sales: data[i].ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*0.9;
                break;
            case Research: data[i].ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*0.75;
                break;
            case Software: data[i].ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*1;
                break;
            case Executive: data[i].ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*2.9;
                break;
            default: data[i].ann_salary = 0;
        }
    }    
}

void print_dept(int temp) {

    switch (temp) {
        case 0: printf("HR \t"); break;
        case 1: printf("Sales \t"); break;
        case 2: printf("Research \t"); break;
        case 3: printf("Software \t"); break;
        case 4: printf("Executive \t"); break;
        default: printf("Invalid!!!!");
    }
}

int main() {

    emply_data current_data[T] = {{HR,0,0},{Software,0,0},{Executive,0,0},{Sales,0,0},{Software,0,0},{Research,0,0},{HR,0,0},{Executive,0,0},{Executive,0,0},{Sales,0,0}};

    gen_salary(current_data,T);
    gen_ssn(current_data,T);

    //print_dept(current_data);

    printf("LIST OF EMPLOYESS s \n");

    int temp = 0;
    for (int i = 0; i < T; ++i) {

        //printf("Dept is %d\t",current_data[i].name);
        temp = current_data[i].name;
        printf("%d \t",i);
        print_dept(temp);
        printf("Annual Salary is %d\t\t",current_data[i].ann_salary);
        printf("SSN is %d \n",current_data[i].ssn);
    }



}