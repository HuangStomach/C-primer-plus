#include <stdio.h>
#include <string.h>
#define WIDTH 40
#define SPACE ' '

void show_n_char(char c, int num);

int main(void) {
    int spaces;

    show_n_char('*', WIDTH);
    putchar('\n');
    show_n_char(SPACE, 12);
    printf("sth");
    show_n_char('*', WIDTH);
    putchar('\n');
    
    return 0;
}

void show_n_char(char ch, int num) {
    int count;

    for (count = 1; count <= num; count++) {
        putchar(ch);
    }
}