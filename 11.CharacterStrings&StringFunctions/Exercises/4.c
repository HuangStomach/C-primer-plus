#include <stdio.h>
#include <ctype.h>
void put_char(char *, int);

int main(void) {
    int n = 80;
    char st[n];
    st[n - 1] = '\0';
    put_char(st, n);
    printf("%s\n", st);
    return 0;
}

void put_char(char * st, int n) {
    int begin = 0;
    for (int i = 0; i < n; i++) {
        char c = getchar();
        if (begin == 0) {
            if (!isspace(c)) {
                begin = 1;
                *st++ = c;
            }
            else continue;
        }
        else {
            if (isspace(c)) break;
            else *st++ = c;
        }
    }
}
