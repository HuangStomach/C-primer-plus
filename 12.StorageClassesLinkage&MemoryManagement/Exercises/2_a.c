#include <stdio.h>
#include "2_a.h"

static int mode;
static double dis;
static double units;

void set_mode(int m) {
    if (m == 0 || m == 1) mode = m;
    else printf("Invalid mode, %d used\n", mode);
}

void get_info() {
    if (mode == 0) {
        printf("km: ");
        scanf("%lf", &dis);
        printf("liters: ");
        scanf("%lf", &units);
    }
    else {
        printf("miles: ");
        scanf("%lf", &dis);
        printf("gallons: ");
        scanf("%lf", &units);
    }
}

void show_info() {
    if (mode == 0) printf("%.2lf liters per 100km\n", units / (dis / 100));
    else printf("%.2lf miles per gallons\n", dis / units);
}

