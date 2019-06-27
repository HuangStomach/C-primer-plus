#include <stdio.h>
#include <ctype.h>
int main(void) {
    char ch;

    while ((ch = getchar()) != '#') {
        if ('\n' == ch) continue;
        if (islower(ch)) {
            switch (ch) {
            case 'a':
                printf("argali\n");
                break;
            default:
                printf("that's a stumper\n");
            }
        }
        else printf("lower plz\n");

        while (getchar() != '\n') {
            continue;
        }
    }
    return 0;
}