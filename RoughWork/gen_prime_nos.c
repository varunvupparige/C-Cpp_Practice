#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int p, i, prime_array[50], prime_idx = 2;
    bool isPrime;

    prime_array[0] = 2;
    prime_array[1] = 3;

    for(p = 5; p < 50; p = p +2) {
        isPrime = true;

        for(i = 2; isPrime && p/prime_array[i] >= prime_array[i]; ++i) {
            if (p % prime_array[i] == 0) isPrime = false;
        }

        if (isPrime == true) {
            prime_array[prime_idx] = p;
            ++prime_idx;
        }
 
    }

    for(i = 1; i < prime_idx; ++i) {
        printf("%d\n", prime_array[i]);
    }

}