#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char * args[]) {
    char * arg = argc > 1 ? args[1] : "-p";
    char c;
    while ((c = getchar()) != EOF) {
        if (strcmp(arg, "-u") == 0) printf("%c", toupper(c));
        else if (strcmp(arg, "-l") == 0) printf("%c", tolower(c));
        else printf("%c", c);
    }

    return 0;
}