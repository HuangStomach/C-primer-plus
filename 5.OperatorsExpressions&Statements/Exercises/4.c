#include <stdio.h>
const float unit = 30.48;
const float unit_i = 0.393700787;
int main(void) {
    float cm = 1;

    while (cm > 0) {
        printf("Enter a height in cm: ");
        scanf("%f", &cm);
        if (cm < 0) printf("bye");
        else {
            int feet = cm / unit;
            printf("%.1f cm = %d feet, %.1f inches \n", cm, feet, (cm - (feet * unit)) * unit_i);
        }
    }

    return 0;
}