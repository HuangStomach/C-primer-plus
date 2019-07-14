#include <stdio.h>
#include "3_a.h"

int set_mode(int old, int new) {
    if (new == 0 || new == 1) return new;
    else {
        printf("Invalid mode, %d used\n", old);
        return old;
    }
}

double get_info(int mode) {
    double dis;
    double units;
    if (mode == 0) {
        printf("km: ");
        scanf("%lf", &dis);
        printf("liters: ");
        scanf("%lf", &units);
        return units / (dis / 100);
    }
    else {
        printf("miles: ");
        scanf("%lf", &dis);
        printf("gallons: ");
        scanf("%lf", &units);
        return dis / units;
    }
}

void show_info(int mode, double result) {
    if (mode == 0) printf("%.2lf liters per 100km\n", result);
    else printf("%.2lf miles per gallons\n", result);
}

