#include <stdio.h>
int main(void) {
    const int length = 6;
    const char start = 'F';

    for (int i = 1; i <= length; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", start - j);
        }
        printf("\n");
    }
    return 0;
}
