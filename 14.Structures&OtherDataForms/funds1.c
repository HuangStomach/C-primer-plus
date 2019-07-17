#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(double, double);

int main(void) {
    struct funds stan = {
        "A bank",
        4032.27,
        "Lucky's savings and loan",
        8543.94
    };

    printf("total $%.2f", sum(stan.bankfund, stan.savefund));
}

double sum(double a, double b) {
    return (a + b);
}