
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

    char s[] = "lol";
    char *t = s;

    t[0] = toupper(*t);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

}