#include <stdio.h>
#include "hotel.h"
int menu(void) {
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter ....");
    printf("1 2 3 4 5\n");
    while ((status = scanf("%d", &code)) != 1
    || (code < 1 || code > 5)) {
       if (status != -1) scanf("%*s");
       printf("Enter 1-5 plz\ns");
    }
    
    return code;
}

int getnights(void) {
    int nights;

    printf("How many?");
    while (scanf("%d", &nights) != 1) {
        scanf("%*s");
        printf("Integer plz\n");
    }
    
    return nights;
}

void showprice(double rate, int nights) {
    int n;
    double total = 0.0;
    double factor = 1.0;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT) {
        total += rate * factor;
    }
    printf("Total will be $%.2f.\n", total);
}