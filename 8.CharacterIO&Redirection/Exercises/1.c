#include <stdio.h>
int main(void) {
    int count = 0;
    while (getchar() != EOF) {
        count++;
    }
    printf("the number of chars if %d\n", count);
    return 0;
}