#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int ch;
    char file[80];
    FILE *fp;

    unsigned long count = 0;
    do {
        printf("Plz type in the file name\n");
    } while (scanf("%s", file) != 1);

    if ((fp = fopen(file, "r")) == NULL) {
        printf("Can't open %s\n", file);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        count++;
    }
    
    fclose(fp);
    printf("\nFile %s has %lu chars\n", file, count);

    return 0;
}