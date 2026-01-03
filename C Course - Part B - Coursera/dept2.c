#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // Needed for seeding the random generator

#define SSN_MIN 100000
#define SSN_MAX 999999

#define BASE 15000
#define SALARY_MIN 1000
#define SALARY_MAX 2000

#define T 10

typedef enum { HR, Sales, Research, Software, Executive } dept;
typedef unsigned int uint;
typedef struct { dept name; int ann_salary; uint ssn; } emply_data;

// Generates a random SSN between SSN_MIN and SSN_MAX
void gen_ssn(emply_data data[], int size) {
    for (int i = 0; i < size; i++) {
        data[i].ssn = rand() % (SSN_MAX - SSN_MIN + 1) + SSN_MIN;
    }
}

// Generates annual salary based on department with correct random range
void gen_salary(emply_data *data, int size) {
    for (int i = 0; i < size; i++) {
        int random_salary = rand() % (SALARY_MAX - SALARY_MIN + 1) + SALARY_MIN;
        switch (data[i].name) {
            case HR: 
                data[i].ann_salary = BASE * 0.9 + random_salary;
                break;
            case Sales: 
                data[i].ann_salary = BASE * 0.9 + random_salary;
                break;
            case Research: 
                data[i].ann_salary = BASE * 0.75 + random_salary;
                break;
            case Software: 
                data[i].ann_salary = BASE * 1.0 + random_salary;
                break;
            case Executive: 
                data[i].ann_salary = BASE * 2.9 + random_salary;
                break;
            default: 
                data[i].ann_salary = 0;
        }
    }
}

// Prints department name based on enum value
void print_dept(int temp) {
    switch (temp) {
        case HR: printf("HR\t\t"); break;
        case Sales: printf("Sales\t\t"); break;
        case Research: printf("Research\t"); break;
        case Software: printf("Software\t"); break;
        case Executive: printf("Executive\t"); break;
        default: printf("Invalid\t\t");
    }
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    emply_data current_data[T] = {
        {HR, 0, 0}, {Software, 0, 0}, {Executive, 0, 0},
        {Sales, 0, 0}, {Software, 0, 0}, {Research, 0, 0},
        {HR, 0, 0}, {Executive, 0, 0}, {Executive, 0, 0}, {Sales, 0, 0}
    };

    gen_salary(current_data, T);
    gen_ssn(current_data, T);

    printf("LIST OF EMPLOYEES\n");
    for (int i = 0; i < T; ++i) {
        printf("%d\t", i);
        print_dept(current_data[i].name);
        printf("Annual Salary: %d\tSSN: %u\n", current_data[i].ann_salary, current_data[i].ssn);
    }

    return 0;
}