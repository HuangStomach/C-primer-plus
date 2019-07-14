#include <stdio.h>
#include "2_a.h"

int main(void) {
    int mode;

    printf("Insert mode: ");
    scanf("%d", &mode);
    while (mode > 0) {
        set_mode(mode);
        get_info();
        show_info();
        printf("Insert mode: ");
        scanf("%d", &mode);
    }
    printf("Done\n");
    return 0;
}