#include <stdio.h>
#include <limits.h>
#include <strings.h>

int convert(char []);
char * itobs(int n, char * ps);

int main(int argc, char * argv[]) {
    int a = convert(argv[1]);
    int b = convert(argv[2]);

    char str[CHAR_BIT * sizeof(int) + 1];
    itobs(~a, str);
    printf("%s\n", str);
    itobs(~b, str);
    printf("%s\n", str);

    itobs(a & b, str);
    printf("%s\n", str);

    itobs(a | b, str);
    printf("%s\n", str);

    itobs(a ^ b, str);
    printf("%s\n", str);
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


char * itobs(int n, char * ps) {
    const static int size = CHAR_BIT * sizeof(int);

    for (int i = size - 1; i >= 0; i--, n >>= 1) {
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';
    
    return ps;
}