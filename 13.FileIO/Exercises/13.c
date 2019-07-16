#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    const int row = 20;
    const int col = 30;
    FILE * fp;
    if ((fp = fopen("12_1.txt", "r")) == NULL) {
        fprintf(stderr, "I couldn't open the file 12.txt\n");
        exit(EXIT_FAILURE);
    }

    int arr[row][col];
    int i = 0;
    int j = 0;

    char c;
    while ((c = getc(fp)) != EOF) {
        if (isnumber(c)) {
            arr[i][j++] = c - '0';
            continue;
        }

        if (c == '\n') {
            i++;
            j = 0;
        }
    }

    if ((fp = fopen("12_2.txt", "w")) == NULL) {
        fprintf(stderr, "I couldn't write the file 12_2.txt\n");
        exit(EXIT_FAILURE);
    }

    char chars[] = {' ', '.', '\'', ':', '~', '*', '=', '?', '%', '#'};
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            putc(chars[arr[i][j]], fp);
        }
        putc('\n', fp);
    }
    
    fclose(fp);
    return 0;
}