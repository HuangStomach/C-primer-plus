#include <stdio.h>
#include <strings.h>

struct month {
    char name[3];
    int days;
    int index;
};

int main() {
    char str[80];
    int days;
    int day;
    struct month months[12] = {
        {"Jan", 31, 1},
        {"Feb", 28, 2},
        {"Mar", 31, 3},
        {"Apr", 30, 4},
        {"May", 31, 5},
        {"Jun", 30, 6},
        {"Jul", 31, 7},
        {"Aug", 31, 8},
        {"Sep", 30, 9},
        {"Oct", 31, 10},
        {"Nov", 30, 11},
        {"Dec", 31, 12},
    };

    while (scanf("%s", str) == 1) {
        if (scanf("%d", &day) != 1) break;

        for (int i = 0; i < 12; i++) {
            if (strcmp(str, months[i].name) == 0) {
                days += day;
                break;
            }
            days += months[i].days;
        }
        printf("Total days is %d\n", days);
    }
    
    return 0;
}