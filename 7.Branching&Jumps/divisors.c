#include <stdio.h>
#include <stdbool.h>
int main(void) {
    unsigned long num;
    unsigned long div;
    bool isPrime;

    while (scanf("%lu", &num) == 1) {
        for (div = 2, isPrime = true; (div * div) <= num; div++) {
            if (num % div == 0) {
                if ((div * div) != num) printf('is divisible');
                else ('too');
                isPrime = false;
            }
        }

        if (isPrime) printf("is prime");
    }
    
    return 0;
}