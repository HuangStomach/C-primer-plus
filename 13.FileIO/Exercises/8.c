#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    if (argc < 2) {
        printf("Usage...what ever.\n");
        exit(EXIT_FAILURE);
    }

    int count = 0;
    char c = *argv[1];

    if (argc == 2) {
        char b;
        
        while ((b = getc(stdin)) != '\n') {
            if (b == c) count++;
        }
        
        printf("U got %d same char as %c from stdin\n", count, c);
        return 0;
    }

    for (int i = 2; i < argc; i++) {
        count = 0;
        char * name = argv[i];
        FILE * fp;
    
        if ((fp = fopen(name, "r")) == NULL) {
            fprintf(stderr, "I couldn't open the file \"%s\"\n", name);
            continue;
        }

        char b;
        while ((b = getc(fp)) != EOF) {
            if (c == b) count++;
        }
        printf("U got %d same char as %c from %s\n", count, c, name);
    }
    
    return 0;
}
