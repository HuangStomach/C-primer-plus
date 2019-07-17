#include <stdio.h>
#define LEN 20

const char * msgs[5] = {
    "A", "B", "C", "D", "E"
};

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void) {
    struct guy fellow = {
        { "Ewen", "Villard" },
        "grilled salmon",
        "personality coach",
        68112.00
    };

    /* skip some output */
    
    return 0;
}
