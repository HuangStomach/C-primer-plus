#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    if (argc != 3) {
        printf("Plz use the args.\n");
        exit(EXIT_FAILURE);
    }

    const int length = 80;
    char * file1 = argv[1];
    char * file2 = argv[2];
    FILE * filea, * fileb;
    
    if ((filea = fopen(file1, "r")) == NULL) {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", file1);
        exit(EXIT_FAILURE);
    }
    
    if ((fileb = fopen(file2, "r")) == NULL) {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", file2);
        exit(EXIT_FAILURE);
    }

    char a, b;
    while (a != EOF && b != EOF) {
        while ((a = getc(filea)) != '\n' && a != EOF) {
            putc(a, stdout);
        }
        putc(' ', stdout);
        if (b != EOF) while ((b = getc(fileb)) != '\n' && b != EOF) {
            putc(b, stdout);
        }
        printf("\n");
    }
    
    return 0;
}
