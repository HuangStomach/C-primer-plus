#include <stdio.h>
#include <string.h>
void print_strings(char * [], int);
void stsrt(char * [], int, int);
char * s_gets(char *, int);

int main(void) {
    char input[10][80];
    char * s1[10];
    int ct = 0;

    printf("Enter:");
    while (ct < 10 && s_gets(input[ct], 80) != NULL && input[ct][0] != '\0') {
        s1[ct] = input[ct];
        ct++;
    }
    printf("请选择:\n");
    printf("0. print\n");
    printf("1. ASCII\n");
    printf("2. strlen:\n");
    printf("3. word:\n");
    printf("4. quit:\n");
    
    while (1) {
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                print_strings(s1, 10);
                break;
            case 1:
            case 2:
            case 3:
                stsrt(s1, 10, choice);
                print_strings(s1, 10);
                break;
            default:
                return 0;
                break;
        }
    }
    
    return 0;
}

void print_strings(char * strings [], int num) {
    int i;
    for (i = 0; i < num; i++) {
        printf("%s\n", strings[i]);
    }
}

void stsrt(char * strings [], int num, int type) {
    char *temp;
    int top, seek;

    for (top = 0; top < num - 1; top++) {
        for (seek = top; seek < num; seek++) {
            int result = 0;
            switch (type) {
                case 1:
                    result = strcmp(strings[top], strings[seek]);
                    break;
                case 2:
                    result = strlen(strings[top]) - strlen(strings[seek]);
                    break;
                case 3:
                    result = strlen(strings[top]) - strlen(strings[seek]);
                    break;
                default:
                    break;
            }
            if (result > 0) {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
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