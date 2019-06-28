#include <stdio.h>
#define BASE_S 10
#define WORK_LIMIT 40
#define WORK_RATE 1.5
#define SA 300.0
#define RA 0.85
#define SB 450.0
#define RB 0.8
#define RC 0.75
int main(void) {
    int hours;
    scanf("%d", &hours);

    double salary = (hours > WORK_LIMIT) 
    ? (WORK_LIMIT * BASE_S) + ((hours - WORK_LIMIT) * WORK_RATE * BASE_S)
    : (WORK_LIMIT * BASE_S);

    if (salary <= SA) {
        salary = SA * RA;
    }
    else if (salary <= SB) {
        salary = (SA * RA) + (SB - salary) * RB;
    }
    else {
        salary = (SA * RA) + (SB - SA * RB) + ((salary - SB) * RC);
    }

    return 0;
}