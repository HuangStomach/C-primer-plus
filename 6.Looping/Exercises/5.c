#include <stdio.h>
int main(void) {
    const int length = 5;
    const char start = 'A';
    char c;
    printf("plz input a char");
    scanf("%c", &c);

    for (int i = start; i <= c; i++) {
        for (int j = 0; j < c - i; j++) {
            printf(" ");
        }
        int j;
        for (j = start; j < i; j++) {
            printf("%c", j);
        }
        printf("%c", i);
        for (j = j - 1; j >= start; j--) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
