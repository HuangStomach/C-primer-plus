#include <stdio.h>
#include <string.h>
void del_blank(char *);
char * s_gets(char *, int);

int main(void) {
    char s1[80];
    
    while (s_gets(s1, 80)) {
        del_blank(s1);
        printf("%s\n", s1);
    }
    
    return 0;
}

void del_blank(char * s1) {
	unsigned long spaces_found = 0;

	while (*s1 != '\0') {
		if (*s1 == ' ') spaces_found++;
		else *(s1 - spaces_found) = *s1;

		s1++;
	}
}

char * s_gets(char * st, int n) {
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') st[i] = '\0';
        else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }

    return ret_val;
}