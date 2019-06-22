#include <stdio.h>
#define PI 3.141593
int main(void) {
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies", number, pies);
    printf("The values of pi is %f.\n", PI);
    printf("Farewell! thou art to dear for my possesing,\n");
    printf("%c%d\n", '$', 2 * cost);
    
    return 0;
}