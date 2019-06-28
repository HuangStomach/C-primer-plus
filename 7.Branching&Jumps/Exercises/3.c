#include <stdio.h>
int main(void) {
    char c;
    
    int odd = 0;
    int odd_num = 0;

    int even = 0;
    int even_num = 0;

    while ((c = getchar()) != '0') {
        if (c == '\n') continue;
        
        int val = c - '0';
        if (val % 2 == 0) {
            even += val;
            even_num++;
        }
        else {
            odd += val;
            odd_num++;
        }
    }
    
    odd / odd_num;
    even / even_num;
    return 0;
}