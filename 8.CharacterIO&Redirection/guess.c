#include <stdio.h>
int main(void) {
    int guess = 1;
    char response;

    printf("Try?");
    while ((response = getchar() != 'y')) {
        if (response == 'n') printf("Is it %d?\n", ++guess);
        else printf("Sorry, but what?\n");

        while (getchar() != '\n') {
            continue;
        }
    }
    return 0;
}