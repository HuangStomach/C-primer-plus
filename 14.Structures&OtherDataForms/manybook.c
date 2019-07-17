#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS 100

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void) {
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("title?\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
    && library[count].title[0] != '\0') {
        printf("author?\n");
        s_gets(library[count].author, MAXAUTL);
        printf("value?\n");
        scanf("%f", &library[count].value);
        while (getchar() != '\n') continue;
        
        if (count < MAXBKS) printf("title?\n");
    }
    
    if (count > 0) {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++) {
            printf("book %s\n", library[index].title);
        }
        
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
