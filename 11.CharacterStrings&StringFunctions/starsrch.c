#include <stdio.h>
#include <string.h>
#define LISTSIZE 6
int main(void) {
    const char * list[LISTSIZE] = {
        "astronomy", "astounding",
        "astrophysucs", "ostracize",
        "asterism", "astrophobia"
    };
    int count = 0;
    int i;

    for (i = 0; i < LISTSIZE; i++) {
        if (strncmp(list[i], "astro", 5) == 0) {
            printf("Found");
            count++;
        }
    }

    return 0;
}