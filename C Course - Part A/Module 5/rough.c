#include <stdio.h>

int mystery(int p, int q){
     
    int r;
    if ((r = p % q) == 0)
        return q; 
    else return mystery(q, r);
}

int main()
{
     int a = 7, b = 91;
     printf("lol = %d",mystery(a,b));
     return 0;
}