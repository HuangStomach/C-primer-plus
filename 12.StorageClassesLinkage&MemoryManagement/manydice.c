#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main(void) {
    int dice, roll;
    int sides;
    int status;

    srand((unsigned int) time(0));
    printf("Enter the number of sides per die, 0 to stop.\n");
    while (scanf("%d", &sides) == 1 && sides > 0) {
        printf("How many?\n");
        if ((status = scanf("%d", &dice)) != 1) {
            if (status == EOF) break;

            printf("You should have entered an integer.\n");
            printf("Lets begin again.\n");
            while (getchar() != '\n') {
                continue;
            }
            printf("How many?\n");
            continue;
        }

        roll = roll_n_dice(dice, sides);
        printf("%d %d %d", roll, dice, sides);
        printf("How many?\n");
    }
    
    printf("rollem() functions was called %d times.\n");
    return 0;
}