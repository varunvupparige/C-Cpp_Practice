#include <stdio.h>
#include <stdlib.h>

#define SSN_MIN 100000
#define SSN_MAX 999999

#define BASE 15000
#define SALARY_MIN 1000
#define SALARY_MAX 2000

#define T 3


typedef enum { HR, Sales, Research, Software, Executive}dept;
typedef unsigned int uint;
typedef struct { dept name; int ann_salary; uint ssn; }emply_data;

//static const char* const dept_name[] = {"HR","Sales","Research","Software","Executive"};

/*
void gen_ssn(emply_data *data[T]) {

    data[T]->ssn = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN;
}

void gen_salary(emply_data *data[T]) {

    switch (data[T]->name) 
    {
        case HR: data[T]->ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*0.9;
            break;
        case Sales: data[T]->ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*0.9;
            break;
        case Research: data[T]->ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*0.75;
            break;
        case Software: data[T]->ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*1;
            break;
        case Executive: data[T]->ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*2.9;
            break;
        default: data[T]->ann_salary = 0;  
    }    
}
*/

void gen_ssn(emply_data data) {

    data[T].ssn = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN;
}


void gen_salary(emply_data data[T]) {

    switch (data[T].name) 
    {
        case HR: data[T].ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*0.9;
            break;
        case Sales: data[T].ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*0.9;
            break;
        case Research: data[T].ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*0.75;
            break;
        case Software: data[T].ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*1;
            break;
        case Executive: data[T].ann_salary = rand() % (SSN_MIN - SSN_MAX + 1) + SSN_MIN + BASE*2.9;
            break;
        default: data[T].ann_salary = 0;  
    }    
}

int main() {

    emply_data current_data[T] = {{HR,0,0},{Software,0,0},{Executive,0,0}};

    gen_salary(current_data);
    //gen_ssn(current_data);


    for (int i = 0; i < 3; ++i) {

        printf("Dept is %d\t",current_data[i].name);
        printf("Annual Salary is %d\t",current_data[i].ann_salary);
        printf("SSN is %d \n",current_data[i].ssn);
    }



}







