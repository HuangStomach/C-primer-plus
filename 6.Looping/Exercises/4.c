#include <stdio.h>
int main(void) {
    const int length = 6;
    char c = 'A';

    for (int i = 1; i <= length; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", c++);
        }
        printf("\n");
    }
    return 0;
}
