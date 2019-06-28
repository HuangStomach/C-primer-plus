#include <stdio.h>
int main(void) {
    printf("打字吧\n");
    char c;

    int a = 0;
    int b = 0;
    int c = 0;

    while ((c = getchar()) != '#') {
       if (c == '\n') a++;
       else if (c == ' ') b++;
       else c++;
    }
    
    return 0;
}