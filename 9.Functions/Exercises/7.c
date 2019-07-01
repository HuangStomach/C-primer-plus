#include <stdio.h>
#include <ctype.h>
void report(void);
int pos(char);

int main(void) {
    report();
}

void report(void) {
    char c;
    while ((c = getchar()) != EOF) {
        printf("%s %d", isalpha(c) ? "yes" : "no", pos(c));
    }
}

int pos(char c) {
    if (isalpha(c)) {
        char a = toupper(c);
        return a - 'A' + 1;
    }
    else return -1;
}