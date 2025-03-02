#include <stdio.h>

typedef struct {
    int age;
    int year;
} Person;


int main() 
{
    Person a[2] = {{28,1996},{30,1994}};
    Person *p = &a[0];

    int cris = 10; 
    int *var = &cris;

    char *s = "abc";

    printf("%d\n", p->age);
    p++;
    printf("%d\n", p->age);

    printf("%c \t %s\t\n",*s,s);
    s++;
    printf("%c\t %s\t\n",*s,s);

    printf("%d\t %d\n",*var,&cris);

}