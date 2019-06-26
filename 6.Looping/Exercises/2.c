#include <stdio.h>
int main(void) {
    const int length = 5;

    for (int i = 1; i <= length; i++) {
        for (int j = 0; j < i; j++) {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
