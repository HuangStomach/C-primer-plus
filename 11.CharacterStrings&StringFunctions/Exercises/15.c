#include <stdio.h>
#include <ctype.h>
int my_atoi(char *);
int main(void) {
    char str[80];
    while (scanf("%s", str) > 0) {
        int num = my_atoi(str);
        printf("%d\n", num);
    }
    
    return 0;
}

int my_atoi(char * str) {
    int value = 0;
    while (*str != '\0') {
        if (!isnumber(*str)) return 0;
        int current = *str - '0';
        value = value * 10 + current;
        str++;
    }
    return value;
}
