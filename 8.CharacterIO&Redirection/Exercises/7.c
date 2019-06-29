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
    printf("a) $8.75/hr\n");
    printf("b) $9.33/hr\n");
    printf("c) $10.00/hr\n");
    printf("d) $11.20/hr\n");
    printf("q) quit\n");

    while ((c = getchar()) != 'q') {
        if (c == '\n') continue;
        switch (c) {
        case 'a':
            base_s = 8.75;
            break;
        case 'b':
            base_s = 9.33;
            break;
        case 'c':
            base_s = 10.00;
            break;
        case 'd':
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
        printf("a) $8.75/hr\n");
        printf("b) $9.33/hr\n");
        printf("c) $10.00/hr\n");
        printf("d) $11.20/hr\n");
        printf("q) quit\n");
    }

    return 0;
}