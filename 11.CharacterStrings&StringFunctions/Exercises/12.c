#include <stdio.h>
#include <ctype.h>
int main(void) {
    char c;
    
    int words = 0;
    int upper = 0;
    int lower = 0;
    int punct = 0;
    int num = 0;

    int in_word = 0;
    while ((c = getchar()) != EOF) {
        if (!isblank(c)) in_word = 1;
        else if (isblank(c) && in_word) {
            in_word = 0;
            words++;
        }
        
        if (isupper(c)) upper++;
        else if (islower(c)) lower++;
        else if (ispunct(c)) punct++;
        else if (isnumber(c)) num++;
    }
    printf("words: %d, upper: %d, lower: %d, punct: %d, num: %d\n", words, upper, lower, punct, num);
    return 0;
}