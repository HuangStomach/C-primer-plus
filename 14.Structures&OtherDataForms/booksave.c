#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

char * s_gets(char * st, int n);

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void) {
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof(struct book);

    if ((pbooks = fopen("book.bat", "a+b")) == NULL) {
        exit(EXIT_FAILURE);
    }

    rewind(pbooks);
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1) {
        count++;
    }
    
    filecount = count;
    if (count == MAXBKS) exit(2);

    printf("Plz add books");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
    && library[count].title[0] != '\0') {
        printf("author?\n");
        s_gets(library[count].author, MAXTITL);
        puts("value?");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n');
    }
    
    if (count > 0) {
        fwrite(&library[filecount], size, count - filecount, pbooks);
    }
    fclose(pbooks);
    
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
