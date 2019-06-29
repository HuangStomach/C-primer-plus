#include <stdio.h>
#include <ctype.h>
int main(void) {
    int count = 0;
    char ch;
    while ((ch = getchar()) != EOF) {
        if (isblank(ch)) {
            if (ch == ' ') printf(" ");
            else if (ch == '\n') printf("\\n");
            else printf("\\t");
        }
        else if (iscntrl(ch)) {
            printf("^%c", ch + 64);
        }
        else printf("%c", ch);
        printf("-%d ", (int)ch);
        count++;
        if (count % 8 == 0) printf("\n");
    }
    printf("\n");
    return 0;
}