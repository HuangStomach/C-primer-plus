#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "7_b.h"

int main(void) {
    int sets;

    srand((unsigned int) time(0));
    printf("Enter the number of sets; 0 to stop.\n");
    while (scanf("%d", &sets) == 1 && sets > 0) {
        int sides, dice;
        printf("How many sides, how may dice?\n");
        if (scanf("%d %d", &sides, &dice) != 2) {
            printf("You should have entered an integer.\n");
            printf("Lets begin again.\n");
            while (getchar() != '\n') {
                continue;
            }
            printf("How many sides, how may dice?\n");
            continue;
        }

        printf("%d sets of %d %d-sided throws:\n", sets, dice, sides);
        for (int i = 0; i < sets; i++) {
            printf("%d ", roll_n_dice(dice, sides));
        }
        printf("\nEnter the number of sets; 0 to stop.\n");
    }
    
    return 0;
}