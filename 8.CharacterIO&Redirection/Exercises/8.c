#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int get_first(void);
int get_second(void);
int main(void) {
    while (true) {
        printf("Enter your choice:\n");
        printf("a.+ b.- c.* d./ q.quit\n");
        char ch = getchar();
        if (ch == 'q') break;
        else if (ch < 'a' || ch > 'd') continue;

        int a = get_first();
        int b = get_second();
        switch (ch) {
        case 'a':
            printf("result is %d\n", a + b);
            break;
        case 'b':
            printf("result is %d\n", a - b);
            break;
        case 'c':
            printf("result is %d\n", a * b);
            break;
        case 'd':
            printf("result is %d\n", a / b);
            break;
        }
        while (getchar() != '\n') {
            continue;
        }
    }

    return 0;
}

int get_first(void) {
    int num;

    printf("Enter the first num:\n");
    if (scanf("%d", &num) != 1) {
        while (getchar() != '\n') {
            continue;
        }
        printf("Enter the first num:\n");
    }

    return num;
}

int get_second(void) {
    int num;
    int res = 0;

    while (true) {
        printf("Enter the second num:\n");
        res = scanf("%d", &num);
        if (res != 1 || num == 0) {
            while (getchar() != '\n') continue;
        }
        else break;
    }
    
    return num;
}