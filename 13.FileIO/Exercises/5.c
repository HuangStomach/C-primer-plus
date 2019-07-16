#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *, FILE *);
char * s_gets(char *, int);

int main(int argc, char * argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Wrong args\n");
        exit(EXIT_FAILURE);
    }

    FILE *fa, *fs; // source, dest
    int files = 0;
    char file_app[SLEN];
    char file_src[SLEN];
    int ch;

    *file_app = argv[2];
    if ((fa = fopen(file_app, "a+")) == NULL) {
        fprintf(stderr, "Can't open %s\n", file_app);
        exit(EXIT_FAILURE);
    }

    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) {
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }

    *file_src = argv[1];
    if (strcmp(file_app, file_src) == 0) fputs("Can't append file to itself\n", stderr);
    else if ((fs = fopen(file_src, "r")) == NULL) fprintf(stderr, "Can't open %s\n", file_src);
    else {
        if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) {
            fputs("Can't create input buffer\n", stderr);
            exit(EXIT_FAILURE);
        }
        append(fs, fa);
        if (ferror(fs) != 0) {
            fprintf(stderr, "Error in reading file %s.\n", file_src);
        }
        if (ferror(fa) != 0) {
            fprintf(stderr, "Error in reading file %s.\n", file_app);
        }
        
        fclose(fs);
        files++;
        printf("File %s appended.\n", file_src);
        puts("Next file (empty line to quit):");
    }
        

    printf("%d files appended.\n", files);
    rewind(fa);
    printf("%s contents: \n", file_app);
    while ((ch = getc(fa)) != EOF) {
        putchar(ch);
    }
    puts("Done displaying.");
    fclose(fa);
    
    return 0;
}

void append(FILE *source, FILE *dest) {
    size_t bytes;
    static char temp[BUFSIZE];

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0) {
        fwrite(temp, sizeof(char), bytes, dest);
    }
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