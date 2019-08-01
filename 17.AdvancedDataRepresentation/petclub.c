#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "tree.h"

char menu(void);
void addpet(Tree * pt);
void droppet(Tree * pt);
void showpets(const Tree * pt);
void findpet(const Tree * pt);
void printitem(Item item);
void uppercase(char * str);
char * s_gets(char * st, int n);

int main(void) {
    Tree pets;
    char choice;

    InitializeTree(&pets);
    while ((choice = menu()) != 'q') {
        switch (choice) {
        case 'a':
            addpet(&pets);
            break;
        case 'l':
            showpets(&pets);
            break;
        case 'f':
            findpet(&pets);
            break;
        case 'n':
            TreeItemCount(&pets);
            break;
        case 'd':
            droppet(&pets);
            break;
        default:
            puts("error");
            break;
        }
    }
    DeleteAll(&pets);
    puts("Bye.");

    return 0;
}

char menu(void) {
    int ch;

    puts("some choices");
    while ((ch = getchar()) != EOF) {
        while (getchar() != '\n') {
            continue;
        }
        ch = tolower(ch);
        if (strchr("alrfndq", ch) == NULL) {
            puts("Plz enter");
        }
        else break;
    }
    
    if (ch == EOF) ch = 'q';

    return ch;
}

void addpet(Tree * pt) {
    Item temp;

    if (TreeIsFull(pt)) puts("No room in the club!");
    else {
        puts("name");
        s_gets(temp.petname, SLEN);
        puts("kind");
        s_gets(temp.petkind, SLEN);
        uppercase(temp.petname);
        uppercase(temp.petkind);
        AddItem(&temp, pt);
    }
}

void showpets(const Tree * pt) {
    if (!TreeIsEmpty(pt)) Traverse(pt, printitem);
}

void printitem(Item item) {
    printf("%s", item.petname);
}

void findpet(const Tree * pt) {
    Item temp;

    if (TreeIsEmpty(pt)) {
        puts("No entries!");
        return;
    }

    puts("Please enter name of pet you wish to find:");
    s_gets(temp.petname, SLEN);
    puts("link");
    s_gets(temp.petkind, SLEN);
    uppercase(temp.petname);
    uppercase(temp.petkind);
    if (InTree(&temp, pt)) printf("Is a member.\n");
}

void droppet(Tree * pt) {
    Item temp;

    if (TreeIsEmpty(pt)) {
        puts("No");
        return;
    }

    puts("Please enter name of pet you wish to find:");
    s_gets(temp.petname, SLEN);
    puts("link");
    s_gets(temp.petkind, SLEN);
    uppercase(temp.petname);
    uppercase(temp.petkind);
    if (DeleteItem(&temp, pt)) printf("is dropped from the club.\n");
}

void uppercase(char * str) {
    while (* str) {
        *str = toupper(*str);
        str++;
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
