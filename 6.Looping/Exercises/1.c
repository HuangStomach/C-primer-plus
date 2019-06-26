#include <stdio.h>
int main(void) {
    const int length = 26;
    char c[length];

    for (int i = 0; i < length; i++) {
        c[i] = 'a' + i;
        printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}
