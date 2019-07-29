#include <stdio.h>
#include <string.h>
#define TSZIE 45
#define FMAX 5

typedef struct film {
    char title[TSZIE];
    int rating;
} FILM;
char * s_gets(char str[], int lim);

int main(void) {
    FILM movies[FMAX];
    int i = 0;
    int j;
    puts("Enter first movie title:");
    while (i < FMAX && s_gets(movies[i].title, TSZIE) != NULL
    && movies[i].title[0] != '\0') {
        puts("Enter your rating <0-10>:");
        scanf("%d", &movies[i++].rating);
        while (getchar() != '\n') {
            continue;
        }
        puts("Enter next movie title:");
    }
    
    if (i == 0) printf("No data");
    else printf("list:\n");

    for (j = 0; i < i; i++) {
        printf("Movie: %s Rating: %d\n", movies[j].title, movies[j].rating);
    }
    printf("Bye!\n");

    return 0;
}

char * s_gets(char * st, int n) {
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') st[i] = '\0';
        else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }

    return ret_val;
}
