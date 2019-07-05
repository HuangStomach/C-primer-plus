#include <stdio.h>
#define STLEN 14
int main(void) {
    char words[STLEN];

    puts("Enter.");
    fgets(words, STLEN, stdin);
    printf("Twice.\n");
    puts(words);
    fputs(words, stdout);
    puts("Another.");
    fgets(words, STLEN, stdin);
    printf("Twice.");
    puts(words);
    fputs(words, stdout);

    return 0;
}