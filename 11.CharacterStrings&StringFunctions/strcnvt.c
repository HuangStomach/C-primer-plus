#include <stdio.h>
#include <stdlib.h>
#define LIM 30
char * s_gets(char * stm, int n);

int main(void) {
    char number[LIM];
    char * end;
    long value;

    puts("Enter:\n");
    while (s_gets(number, LIM) && number[0] != '\0') {
        value = strtol(number, &end, 10);
        value = strtol(number, &end, 16);
        puts("Next number:");
    }
    puts("Bye!\n");
    return 0;
}

char * s_gets(char * st, int n) {
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') st[i] = '\0';
        else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }

    return ret_val;
}