#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(const struct funds *);

int main(void) {
    struct funds stan = {
        "A bank",
        4032.27,
        "Lucky's savings and loan",
        8543.94
    };

    printf("total $%.2f", sum(&stan));
}

double sum(const struct funds * fund) {
    return (fund->bankfund + fund->savefund);
}