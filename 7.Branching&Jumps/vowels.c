#include <stdio.h>
int main(void) {
    char ch;
    int a_ct;
    a_ct = 0;

    while ((ch = getchar()) != '#') {
        switch (ch) {
        case 'a':
        case 'A':
            a_ct++;
            break;
        
        default:
            break;
        }
    }
    return 0;
}