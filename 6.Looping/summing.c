#include <stdio.h>
int main(void) {
    long num;
    long sum = 0L;
    int status;

    printf("Plz enter an integer to be summed");
    printf("(q to quit)");
    status = scanf("%ld", &num);
    while (status == 1) {
       sum = sum + num;
       printf("Plz enter next integer (q to quit): ");
       status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}