#include <stdio.h>
#include <string.h>
#define MAXSIZE 5

struct name {
    char first[80];
    char middle[80];
    char last[80];
};

struct account {
    int no;
    struct name name;
};

void print_account(struct account);

int main(void) {
    struct account accounts[MAXSIZE] = {
        {1, {"A", "B", "C"}},
        {2, {"A", "\0", "C"}},
        {3, {"A", "B", "C"}},
        {4, {"A", "\0", "C"}},
        {5, {"A", "B", "C"}},
    };

    for (int i = 0; i < MAXSIZE; i++) {
        print_account(accounts[i]);
    }
    
    return 0;
}

void print_account(struct account ac) {
    printf("%s, %s %s -- %d\n", ac.name.first, ac.name.last, ac.name.middle[0] == '\0' ? "" : strcat(ac.name.middle, "."), ac.no);
}
