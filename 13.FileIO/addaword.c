#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void) {
    FILE *fp;
    char words[MAX];
    if ((fp = fopen("wordy", "a+")) == NULL) {
        fprintf(stdout, "Can't open \"wordy\" file. \n");
        exit(EXIT_FAILURE);
    }

    puts("Enter words");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) {
        fprintf(fp, "%s\n", words);
    }
    
    puts("Contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1) {
        puts(words);
    }
    puts("Done!");
    if (fclose(fp) != 0) printf(stderr, "Error closing");

    return 0;
}