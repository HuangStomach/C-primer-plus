#include <stdio.h>
void chline(char, int, int);

int main(void) {
    char c;
    scanf("%c", &c);
    int i, j;
    scanf("%d %d", &i, &j);
    chline(c, i, j);
    
    return 0;
}

void chline(char c, int i, int j) {
    for (int a = 0; a < j; a++) {
        for (int b = 0; b < i; b++) {
            printf("%c", c);
        }
        printf("\n");
    }
}