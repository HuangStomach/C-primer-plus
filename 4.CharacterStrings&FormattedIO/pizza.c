#include <stdio.h>
#define PI 3.14159
int main(void) {
    float area, circum, radius;

    printf("What is the raduis of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("你的pizza是介样的：");
    printf("周长是%1.2f, 面积是%1.2f\n", circum, area);

    return 0;
}