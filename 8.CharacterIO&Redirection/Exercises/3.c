#include <stdio.h>
#include <ctype.h>
int main(void) {
    int a = 0;
    int b = 0;
    char ch;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            if (ch >= 'a') b++;
            else a++;
        }
    }
    printf("upper: %d lower: %d\n", a, b);
    return 0;
}