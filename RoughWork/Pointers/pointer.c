#include <stdio.h>
#include <string.h>

int main() {

    char c, s[100], *p;

    c = 'a';
    p = &c;

    strcpy(s,"ABC");

    printf("%c \n",s[0]);
    printf("%c",*(s+1));
}