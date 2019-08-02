#include <stdio.h>
#include <stdlib.h>
#include "5_stack.h"

char * s_gets(char * st, int n);

int main(void) {
    Stack stack;
    Item temp;

    InitializeStack(&stack);
    if (StackIsFull(&stack)) {
        fprintf(stderr, "No memory available! Bye!\n");
        exit(1);
    }

    puts("Enter text:");
    while (s_gets(temp.text, TSIZE) != NULL && temp.text[0] != '\0') {
        temp.a = 1;
        if (Push(temp, &stack) == false) {
            fprintf(stderr, "Problem allocating memory\n");
        }

        if (StackIsFull(&stack)) {
            puts("Stack is now full.");
            break;
        }
        puts("Enter text:");
    }

    if (StackIsEmpty(&stack)) printf("No data entered.");
    else {
        printf("You entered %d texts.\n", StackItemCount(&stack));
        printf("Here is the list:\n");
        while (!StackIsEmpty(&stack)) {
            temp = Pop(&stack);
            printf("text %s\n", temp.text);
        }
        
    }

    printf("Bye!\n");
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
