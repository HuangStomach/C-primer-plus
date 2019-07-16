#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc, char *argv[]) {
    FILE *in;
    char ch;
    int start;
    char source[LEN];
    int count = 0;

    do {
        printf("Plz enter file name.\n");
    } while (scanf("%s", source) != 1);

    if ((in = fopen(source, "r")) == NULL) {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", source);
        exit(EXIT_FAILURE);
    }

    printf("Plz enter the start index.\n");
    while (scanf("%d", &start) == 1) {
        fpos_t index = start;
        if (fsetpos(in, &index) == 0) {
            char c;
            while ((c = getc(in)) != '\n') {
                putc(c, stdout);
            }
        }
        printf("\nPlz enter the start index.\n");
    }

    fclose(in);
    return 0;
}