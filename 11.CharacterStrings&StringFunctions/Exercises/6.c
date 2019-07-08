#include <stdio.h>
int is_within(char, char *);
int main(void) {
    char str[80];
    char c;
    while (scanf("%s %c", str, &c) > 0) {
        printf("%d\n", is_within(c, str));
        printf("again~\n");
    }
    
    return 0;
}

int is_within(char c, char * str) {
    while (*str != '\0') {
        if (*str == c) return 1;
        str++;
    }
    return 0;
}