#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "7_tree.h"

int main(int argc, char * argv[]) {
    if (argc != 2) {
        printf("Plz use the args.\n");
        exit(EXIT_FAILURE);
    }

    char * file = argv[1];
    FILE * fp;
    
    if ((fp = fopen(file, "r")) == NULL) {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", file);
        exit(EXIT_FAILURE);
    }

    Tree tree;
    InitializeTree(&tree);
    Item temp;
    rewind(fp);
    char c = '\0';
    int i = 0;
    while (c != EOF) {
        c = getc(fp);
        if (!isblank(c)) temp.word[i++] = c;
        else {
            temp.word[i] = '\0';
            i = 0;
            AddItem(&temp, &tree);
        }
    }

    do {
        printf("请输入要查找的单词:");
        if (scanf("%s", temp.word) == 0) break;
        printf("出现了%d次\n", InTree(&temp, &tree));
    } while (true);
    
    return 0;
}
