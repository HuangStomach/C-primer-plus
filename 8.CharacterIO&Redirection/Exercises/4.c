#include <stdio.h>
#include <ctype.h>
int main(void) {
    int count = 0;
    int words = 0;
    char pre = ' ';
    char ch;

    while ((ch = getchar()) != EOF) {
        if (!isalpha(pre) && isalpha(ch)) {
            words++;
        }
        pre = ch;
        count++;
    }
    printf("averange is %d\n", count / words);
    return 0;
}