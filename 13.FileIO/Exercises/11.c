#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
    if (argc < 3) {
        printf("Usage...what ever.\n");
        exit(EXIT_FAILURE);
    }

    char * str = argv[1];
    char * file = argv[2];
    FILE * fp;
    
    if ((fp = fopen(file, "r")) == NULL) {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", file);
        exit(EXIT_FAILURE);
    }

    char line[255];
    int index = 1;
    while (fgets(line, 255, fp) != NULL) {
        if (strstr(line, str) != NULL) {
            printf("include %d\n", index);
        }
        index++;
    }

    fclose(fp);
    return 0;
}
