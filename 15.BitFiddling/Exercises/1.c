#include <stdio.h>
#include <strings.h>

int convert(char *);

int main() {
    char pbin[80];
    printf("Input a binary str: ");
    scanf("%s", pbin);

    int val = convert(pbin);
    printf("integer is %d\n", val);
}

int convert(char str[80]) {
    int val = 0;

    int unit = 1;
    for (int i = strlen(str) - 1; i >= 0; i--) {
        val += (str[i] - '0') * unit;
        unit *= 2;
    }
    
    return val;
}
