#include <stdio.h>
int main(void) {
    int i = 0;
    char c;

    while ((c = getchar()) != '#') {
        if (c == '\n') continue;
        printf("-%d", c);
        if ((++i % 8) == 0) printf("\n");
    }
    
    return 0;
}