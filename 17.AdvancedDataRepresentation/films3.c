#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void showmovies(Item item);
char * s_gets(char * st, int n);

int main(void) {
    List movies;
    Item temp;

    InitializeList(&movies);
    if (ListIsFull(&movies)) {
        printf(stderr, "No memory available! Bye!\n");
        exit(1);
    }

    puts("Enter title:");
    while (s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0') {
        puts("Enter your rating");
        scanf("%d", &temp.rating);

        while (getchar() != '\n') {
            continue;
        }
        
        if (AddItem(temp, &movies) == false) {
            fprintf(stderr, "Problem allocating memory\n");
        }

        if (ListIsFull(&movies)) {
            puts("List is now full.");
            break;
        }
        puts("Enter next movie title (empty line to stop):");
    }

    if (ListIsEmpty(&movies)) printf("No data entered.");
    else {
        printf("Here is the list:\n");
        Traverse(&movies, showmovies);
    }
    printf("You entered %d movies.\n", ListItemCount(&movies));

    EmptyTheList(&movies);
    printf("Bye!\n");

    return 0;
}

void showmovies(Item item) {
    printf("Movie: %s Rating: %d\n", item.title, item.rating);
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
