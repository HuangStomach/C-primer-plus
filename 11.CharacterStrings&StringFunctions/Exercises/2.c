#include <stdio.h>
void put_char(char *, int);

int main(void) {
    int n = 10;
    char st[n];
    st[n - 1] = '\0';
    put_char(st, n);
    printf("%s\n", st);
    return 0;
}

void put_char(char * st, int n) {
    for (int i = 0; i < n; i++) {
        char c = getchar();
        if (c == '\0' || c == '\t' || c == '\n') break;
        *st++ = c;
    }
}
