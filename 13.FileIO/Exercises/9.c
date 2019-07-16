#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void) {
    FILE *fp;
    char words[MAX];

    if ((fp = fopen("9.txt", "a+")) == NULL) {
        fprintf(stdout, "Can't open \"wordy\" file. \n");
        exit(EXIT_FAILURE);
    }

    int index = 1;
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1) {
        index++;
    }
    

    puts("Enter words");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) {
        fprintf(fp, "%d.%s\n", index, words);
        index++;
    }
    
    puts("Contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1) {
        puts(words);
    }
    puts("Done!");
    if (fclose(fp) != 0) fprintf(stderr, "Error closing");

    return 0;
}