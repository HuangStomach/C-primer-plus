#include <stdio.h>
#define MONTHS 12
#define YEARS 5
float sum(float rain[][MONTHS]);
int main(void) {
    const float rain[YEARS][MONTHS]; // 懒得初始化了
    float subtot, total;

    printf(" YEAR RAINFALL (inches)\n");
    printf("yearly average is %.1f.\n", sum(rain) / YEARS);
    printf("MONTHLY:\n");
    printf(" Jan ...\n");

    for (int month = 0; month < MONTHS; month++) {
        for (int year = 0, subtot = 0; year < YEARS; year++) {
            subtot += rain[year][month];
        }
        printf("%4.1f", subtot / YEARS);
    }
    printf("\n");

    return 0;
}

float sum(float rain[][MONTHS]) {
    float total = 0;
    float subtot = 0;
    for (int year = 0, total = 0; year < YEARS; year++) {
        for (int month = 0, subtot = 0; month < MONTHS; month++) {
            subtot += rain[year][month];
        }
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    return total;
}