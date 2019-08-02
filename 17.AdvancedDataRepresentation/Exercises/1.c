#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45

struct film {
    char title[TSIZE];
    int rating;
    struct film * next;
};

char * s_gets(char * st, int n);
void backward(const struct film *);

int main(void) {
    struct film * head = NULL;
    struct film * prev, * current;
    char input[TSIZE];

    puts("Enter movie title:");
    while (s_gets(input, TSIZE) != NULL 
    && input[0] != '\0') {
        current = (struct film *) malloc(sizeof(struct film));
        if (head == NULL) head = current;
        else prev->next = current;

        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>");
        scanf("%d", &current->rating);
        while (getchar() != '\n') {
            continue;
        }
        puts("Enter next movie title (empty to stop):");
        prev = current;
    }
    

    if (head == NULL) printf("No data.");
    else printf("Here: \n");

    current = head;
    while (current != NULL) {
        printf("Movie: %s Rating: %d\n", current->title, current->rating);
        current = current->next;
    }

    backward(head);

    current = head;
    while (head != NULL) {
        current = head;
        head = current->next;
        free(current);
    }

    return 0;
}

void backward(const struct film * head) {
    if (head->next != NULL) {
        backward(head->next);
    }
    printf("Backward movie: %s Rating: %d\n", head->title, head->rating);
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
