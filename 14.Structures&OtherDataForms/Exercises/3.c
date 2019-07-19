#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS 10

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

char * s_gets(char * st, int n);
int titlecmp(struct book, struct book);
int valuecmp(struct book, struct book);
void sort_list(struct book[], int, int (* pt)(struct book, struct book));

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
        scanf("%f", &library[count++].value);
        while (getchar() != '\n') continue;
        
        if (count < MAXBKS) printf("title?\n");
    }
    
    if (count > 0) {
        printf("Here is the list of your books order by index:\n");
        for (index = 0; index < count; index++) {
            printf("book %s\n", library[index].title);
        }

        printf("Here is the list of your books order by title:\n");
        sort_list(library, count, titlecmp);
        for (index = 0; index < count; index++) {
            printf("book %s\n", library[index].title);
        }

        printf("Here is the list of your books order by value:\n");
        sort_list(library, count, valuecmp);
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

int titlecmp(struct book a, struct book b) {
    return strcmp(a.title, b.title);
}

int valuecmp(struct book a, struct book b) {
    return (a.value - b.value);
}

void sort_list(struct book list[], int num, int (* pt)(struct book, struct book)) {
    struct book temp;
    int top, seek;

    for (top = 0; top < num - 1; top++) {
        for (seek = top; seek < num; seek++) {
            if ((*pt)(list[top], list[seek]) > 0) {
                temp = list[top];
                list[top] = list[seek];
                list[seek] = temp;
            }
        }
    }
}