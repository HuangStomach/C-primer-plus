#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81
char * s_gets(char * st, int n);
char showmenu(void);
void eatline(void);
void show(void (* fp)(char *), char *);
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void Dummy(char *);

int main(void) {
    char line[LEN];
    char copy[LEN];
    char choice;
    void (* pfun)(char *);

    puts("Enter plz:");
    while (s_gets(line, LEN) != NULL & line[0] != '\0') {
        while ((choice = showmenu()) != 'n') {
            switch (choice) {
            case 'u': pfun = ToUpper; break;
            case 'l': pfun = ToLower; break;
            case 't': pfun = Transpose; break;
            case 'o': pfun = Dummy; break;
            }
            strcpy(copy, line);
            show(pfun, copy);
        }
    }
    
    return 0;
}

char showmenu(void) {
    char ans;
    puts("u. uppercase, l. lowercase, t. transposed case, o. original case");
    ans = getchar();
    ans = tolower(ans);
    eatline();
    while (strchr("ulron", ans) == NULL) {
        puts("Plesase enter a u, l, t, o, or n:");
        ans = tolower(getchar());
        eatline();
    }

    return ans;
}

void eatline(void) {
    while (getchar() != '\n') {
        continue;
    }   
}

void ToUpper(char * str) {
    while (* str) {
        *str = toupper(*str);
        str++;
    }
}

void ToLower(char * str) {
    while (* str) {
        *str = tolower(*str);
        str++;
    }
}

void Transpose(char * str) {
    while (* str) {
        if (islower(*str)) *str = toupper(*str);
        else *str = tolower(*str);
        str++;
    }
}

void Dummy(char * str) {
    //
}

void show(void (* fp)(char *), char * str) {
    (*fp)(str);
    puts(str);
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
