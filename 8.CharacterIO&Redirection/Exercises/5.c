#include <stdio.h>
int main(void) {
    int guess = 50;
    int max = 100;
    int min = 0;
    char response;

    printf("Try? num 50?\n");
    while ((response = getchar()) != 'y') {
        if (response == 'b') {
            max = guess;
            guess = (max + min) / 2;
            printf("Is it %d?\n", guess);
        }
        else if (response == 's') {
            min = guess;
            guess = (max + min) / 2;
            printf("Is it %d?\n", guess);
        }
        else printf("Sorry, but what?\n");

        while (getchar() != '\n') {
            continue;
        }
    }
    return 0;
}