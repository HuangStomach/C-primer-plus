#include <stdio.h>
#include <string.h>
#define NLEN 30
struct namect {
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(const struct namect);
char * s_gets(char * st, int n);

int main(void) {
    struct namect person;
    person = getinfo();
    person = makeinfo(person);
    showinfo(person);
    return 0;
}

struct namect getinfo(void) {
    struct namect person;
    printf("first name?\n");
    s_gets(person.fname, NLEN);
    printf("last name?\n");
    s_gets(person.lname, NLEN);

    return person;
}

struct namect makeinfo(struct namect person) {
    person.letters = strlen(person.fname) + strlen(person.lname);
    return person;
}

void showinfo(const struct namect pst) {
    printf("sth");
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

