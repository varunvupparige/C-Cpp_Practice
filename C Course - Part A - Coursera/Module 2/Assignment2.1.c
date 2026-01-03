#include <stdio.h>
#define PI 3.14159

int main(void)
{
    double radius, volume;
    printf("Enter radius:");
    scanf("%d", &radius);
    volume = (4 * PI * radius * radius * radius) / 3.0;
    printf("volume is: %lf \n\n", volume);
    return 0;
}