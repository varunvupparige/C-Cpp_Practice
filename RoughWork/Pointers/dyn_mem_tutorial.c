/*The script to copy the string using dynamic memory allocation*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char s[] = "cristiano";
    char *t = (char *)malloc(strlen(s) + 1);
    char *n = (char *)malloc(strlen(s) + 1);

    for (int i = 0, n = strlen(s); i <= n; ++i) 
    {
        t[i] = s[i];
    }

    t[0] = toupper(s[0]);
    strcpy(n,t); /* first destination string and then source string */

    printf("%s\n", s);
    printf("%s\n", t);

    free;
}