#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc, char *argv[]) {
    FILE *in, *out;
    int ch;
    char source[LEN];
    char name[LEN];
    int count = 0;

    do {
        printf("Plz enter file name.\n");
    } while (scanf("%s", source) != 1);

    if ((in = fopen(source, "r")) == NULL) {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", source);
        exit(EXIT_FAILURE);
    }

    strncpy(name, source, LEN - 5);
    name[LEN - 5] = '\0';
    strcat(name, ".red");
    if ((out = fopen(name, "w")) == NULL) {
        fprintf(stderr, "Cannot create output file.\n");
        exit(3);
    }

    while ((ch = getc(in)) != EOF) {
        if (count++ % 3 == 0) putc(ch, out);
    }
    
    if (fclose(in) != 0 || fclose(out) != 0) {
        fprintf(stderr, "Error in closing files.\n");
    }

    return 0;
}