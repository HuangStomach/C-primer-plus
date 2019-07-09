#include <stdio.h>
#include <string.h>
char * string_in(char *, char *);
int main(void) {
    char s2[80];
    char s1[80];
    
    while (scanf("%s %s", s1, s2) > 0) {
        printf("%s\n", string_in(s1, s2));
    }
    
    return 0;
}

char * string_in(char * s1, char * s2) {
    if (strlen(s2) > strlen(s1)) return '\0';

    int i;
    for (i = 0; i < strlen(s1) - strlen(s2) + 1; i++) {
        if (s1[i] == s2[0]) {
            int j;
            for (j = 1; j < strlen(s2); j++) {
                if (s1[i + j] != s2[j]) break;
            }
            
            if (j == strlen(s2)) {
                s1 += i;
                return s1;
            }
        }
    }
    return '\0';
}