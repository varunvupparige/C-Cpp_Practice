#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

int main(void)
{ 
    double maxinterval, mininterval, val;
    int i;

    printf("Max interval is \t");
    scanf("%lf", &maxinterval);

    printf("Min interval is \t");
    scanf("%lf", &mininterval);

    double diff = maxinterval - mininterval;

    for(i = 0; i <31; i++)
    {
        printf("%d \t",i);
        val = mininterval + (i*diff/30);
        printf("sin( %lf ) = %lf \t\n", val, fabs(sin(val)));
    }

    printf("\n+++++++\n");
    return 0;
}