#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;

    int isdel;
};

char * s_gets(char * st, int n);
int find_a_del(struct book library[MAXBKS], int count);

int main(void) {
    struct book library[MAXBKS];
    int count = 0;
    FILE * pbooks;
    int size = sizeof(struct book);

    if ((pbooks = fopen("7.bat", "r+b")) == NULL) {
        exit(EXIT_FAILURE);
    }

    rewind(pbooks);
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1) {
        if (library[count].isdel == 1) {
            count++;
            continue;
        }
        printf("%s d) del m) modify *) next\n", library[count].title);
        char c;
        if (scanf("%c", &c) != 1) {
            continue;
        }

        switch (c) {
        case 'd':
            library[count].isdel = 1;
            break;
        case 'm':
            printf("title:");
            s_gets(library[count].title, MAXTITL);
            printf("author:");
            s_gets(library[count].author, MAXTITL);
            printf("value:");
            scanf("%f", &library[count].value);
            while (getchar() != '\n') {
                continue;
            }
            break;
        default:
            break;
        }
        count++;
    }
    
    if (count == MAXBKS) exit(2);

    int index = find_a_del(library, count);

    printf("Plz add books: ");
    while (count < MAXBKS ) {
        struct book book;
        if (s_gets(book.title, MAXTITL) == NULL || book.title[0] == '\0') break;

        printf("author: \n");
        s_gets(book.author, MAXTITL);
        puts("value: ");
        scanf("%f", &book.value);
        book.isdel = 0;

        while (getchar() != '\n') {
            continue;
        }

        if (index == -1) library[count++] = book;
        else library[index] = book;

        printf("Plz add books: ");
        int index = find_a_del(library, count);
    }
    
    if (count > 0) {
        rewind(pbooks);
        fwrite(&library[0], size, count, pbooks);
    }
    fclose(pbooks);
    
    return 0;
}

int find_a_del(struct book library[MAXBKS], int count) {
    for (int i = 0; i < count; i++) {
        if (library[i].isdel) return i;
    }
    return -1;
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
