#include <stdio.h>
void display(char c, int lines, int width);
int main(void) {
    int ch;
    int rows, cols;
    printf("A char and two int:\n");
    while ((ch = getchar()) != '\n') {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("And another\n");
        printf("New line\n");
    }
    printf("Bye\n");
    return 0;
}

void display(char c, int lines, int width) {
    int row, col;
    for (row = 1; row <= lines; row++) {
        for (col = 1; col <= width; col++) {
            putchar(c);
        }
        putchar('\n');
    }
}