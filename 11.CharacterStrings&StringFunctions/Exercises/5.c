#include <stdio.h>
char * find(char *, char);
int main(void) {
    char str[80];
    char c;
    while (scanf("%s %c", str, &c) > 0) {
        printf("%p %c\n", find(str, c), *find(str, c));
        printf("again~\n");
    }
    
    return 0;
}

char * find(char * str, char c) {
    while (*str != '\0') {
        if (*str == c) return str;
        str++;
    }
    return '\0';
}