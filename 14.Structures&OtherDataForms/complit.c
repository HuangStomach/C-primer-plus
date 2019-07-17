#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void) {
    struct book readfirst;
    int score;

    printf("Enter test score: ");
    scanf("%d", &score);

    if (score >= 84) readfirst = (struct book) {"C", "F", 11.25};
    else readfirst = (struct book) {"M", "F", 5.99};

    return 0;
}
