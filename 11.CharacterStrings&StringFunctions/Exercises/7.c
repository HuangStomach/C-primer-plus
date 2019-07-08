#include <stdio.h>
char * mystrncpy(char *, char *, int);
int main(void) {
    char * s2;
    char s1[80];
    int count;
    while (scanf("%s %d", s2, &count) > 0) {
        printf("%s\n", mystrncpy(s1, s2, count));
    }
    
    return 0;
}

char * mystrncpy(char * s1, char * s2, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (s2[i] == '\0') {
            s1[i] = '\0';
            return s1;
        }
        s1[i] = s2[i];
    }
    return s1;
}