#include <stdio.h>
#define WORK_LIMIT 40
#define WORK_RATE 1.5
#define SA 300.0
#define RA 0.85
#define SB 450.0
#define RB 0.8
#define RC 0.75
int main(void) {
    int hours;
    char c;
    double base_s;

    printf("Enter~:\n");
    printf("1) $8.75/hr\n");
    printf("2) $9.33/hr\n");
    printf("3) $10.00/hr\n");
    printf("4) $11.20/hr\n");
    printf("5) quit\n");

    while ((c = getchar()) != '5') {
        if (c == '\n') continue;
        switch (c - '0') {
        case 1:
            base_s = 8.75;
            break;
        case 2:
            base_s = 9.33;
            break;
        case 3:
            base_s = 10.00;
            break;
        case 4:
            base_s = 11.20;
            break;
        default:
            base_s = 0.0;
            break;
        }

        if (base_s > 0.0) {
            printf("Enter hours:\n");
            scanf("%d", &hours);

            double salary = (hours > WORK_LIMIT) 
            ? (WORK_LIMIT * base_s) + ((hours - WORK_LIMIT) * WORK_RATE * base_s)
            : (WORK_LIMIT * base_s);

            if (salary <= SA) {
                salary = SA * RA;
            }
            else if (salary <= SB) {
                salary = (SA * RA) + (SB - salary) * RB;
            }
            else {
                salary = (SA * RA) + (SB - SA * RB) + ((salary - SB) * RC);
            }
            printf("salary: %lf\n", salary);
        }

        printf("Enter~:\n");
        printf("1) $8.75/hr\n");
        printf("2) $9.33/hr\n");
        printf("3) $10.00/hr\n");
        printf("4) $11.20/hr\n");
        printf("5) quit\n");
    }

    return 0;
}