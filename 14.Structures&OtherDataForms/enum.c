#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char * s_gets(char * st, int n);

enum spectrum { red, orange, yellow, green, blue, violet };
const char * colors[] = { "red", "orange", "yellow", "green", "blue", "violet" };
#define LEN 30

int main(void) {
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;

    printf("Enter a color (Empty line to quit)");
    while (s_gets(choice, LEN) != NULL && choice[0] != '\0') {
        for (color = red; color < violet; color++) {
            if (strcmp(choice, colors[color]) == 0) {
                color_is_found = true;
                break;
            }
        }
        
        if (color_is_found) {
            switch (color) {
            case red:
            case orange:
            case yellow:
            case green:
            case blue:
            case violet:
                printf("found\n");
                break;
            default:
                break;
            }
        }
        else {
            printf("Don't know");
        }
        color_is_found = false;
    }
    
    return 0;
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
