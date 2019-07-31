#include <stdio.h>
#include "queue.h"

int main(void) {
    Queue line;
    Item temp;
    char ch;

    InitializeQueue(&line);
    puts("a to add, d to delete, q to quit");

    while ((ch = getchar()) != 'q') {
        if (ch != 'a' && ch != 'd') continue;

        if (ch == 'a') {
            printf("Integer to add");
            scanf("%d", &temp);
            if (!QueueIsFull(&line)) {
                printf("Putting %d into queue\n", temp);
                Enqueue(temp, &line);
            }
            else puts("Queue is full!");
        }
        else {
            if (QueueIsEmpty(&line)) puts("Nothing to delete!");
            else {
                DeQueue(&temp, &line);
                printf("Removing %d from queue\n", temp);
            }
        }
        printf("%d items in queue\n", QueueItemCount(&line));
        puts("a to add, d to delete, q to quit");
    }

    EmptyTheQueue(&line);
    puts("Bye!");

    return 0;
}