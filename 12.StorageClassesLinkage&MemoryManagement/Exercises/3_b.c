#include <stdio.h>
#include "3_a.h"

int main(void) {
    int old = 0;
    int new;

    printf("Insert mode: ");
    scanf("%d", &new);
    while (new >= 0) {
        old = set_mode(old, new);
        double result = get_info(old);
        show_info(old, result);
        printf("Insert mode: ");
        scanf("%d", &new);
    }
    printf("Done\n");
    return 0;
}