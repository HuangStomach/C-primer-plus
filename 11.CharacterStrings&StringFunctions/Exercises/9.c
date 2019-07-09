#include <stdio.h>
#include <string.h>
void reverse(char *);
int main(void) {
    char s1[80];
    
    while (scanf("%s", s1) > 0) {
        reverse(s1);
        printf("%s\n", s1);
    }
    
    return 0;
}

void reverse(char * s1) {
    int i;
    int length = strlen(s1) - 1;
    for (i = 0; i < length / 2; i++) {
        char temp = s1[length - i];
        s1[length - i] = s1[i];
        s1[i] = temp;
    }
}