#include <stdio.h>
int main(void) {
    int a;
    int b = 1;

    printf("This...\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &a);

    while (b > 0) {
        printf("Now enter the first operand: ");
        scanf("%d", &b);
        printf("%d %% %d is %d\n", b, a, b % a);
    }

    return 0;
}