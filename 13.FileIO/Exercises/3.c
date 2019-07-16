#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    char ch;
    char source_name[80];
    char dest_name[80];
    FILE *source, *dest;

    do {
        printf("Plz type in the source_name name\n");
    } while (scanf("%s", source_name) != 1);

    if ((source = fopen(source_name, "r")) == NULL) {
        printf("Can't open %s\n", source_name);
        exit(EXIT_FAILURE);
    }

    do {
        printf("Plz type in the dest_name name\n");
    } while (scanf("%s", dest_name) != 1);

    if ((dest = fopen(dest_name, "wb")) == NULL) {
        printf("Can't write %s\n", dest_name);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(source)) != EOF) {
        if (isalpha(ch)) ch = toupper(ch);
        putc(ch, dest);
    }
    
    fclose(source);
    fclose(dest);
    printf("Done\n");

    return 0;
}