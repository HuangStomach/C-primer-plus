#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int num;
    printf("请输入数字:");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++) {
        bool isPrime;
        int div;
        for (div = 2, isPrime = true; (div * div) <= i; div++) {
            if (i % div == 0) isPrime = false;
        }

        if (isPrime) printf("%d is prime\n", i);
    }
    
    return 0;
}