#include <stdio.h>
#define BASEA 17850
#define BASEB 23900
#define BASEC 29750
#define BASED 14875
int main(void) {
    char c;
    double income;

    printf("Enter~:\n");
    printf("1) 单身\n");
    printf("2) 户主\n");
    printf("3) 已婚 共有\n");
    printf("4) 已婚 离异\n");
    printf("5) quit\n");

    while ((c = getchar()) != '5') {
        if (c == '\n') continue;

        if (c >= '1' && c < '5') {
            printf("Enter income:\n");
            scanf("%lf", &income);
            
            int base;
            switch (c) {
            case '1':
                base = BASEA;
                break;
            case '2':
                base = BASEB;
                break;
            case '3':
                base = BASEC;
                break;
            case '4':
                base = BASED;
                break;
            }
            double tax = (income > base)
            ? (base * 0.15) + ((income - base) * 0.28)
            : income * 0.15;

            printf("税金是: %lf\n", tax);
        }
        
        printf("Enter~:\n");
        printf("1) 单身\n");
        printf("2) 户主\n");
        printf("3) 已婚 共有\n");
        printf("4) 已婚 离异\n");
        printf("5) quit\n");
    }

    return 0;
}