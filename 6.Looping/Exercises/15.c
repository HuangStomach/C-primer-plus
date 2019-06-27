#include <stdio.h>
#include <string.h>
int main(void) {
    char c[255];
    scanf("%s", c);

    for (int i = strlen(c) - 1; i >= 0; i--) {
        printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}
