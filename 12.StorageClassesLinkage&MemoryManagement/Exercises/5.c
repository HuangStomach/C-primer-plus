#include <stdio.h>
unsigned int rand0();
void sort_list(int [], int);

static int seed = 13;

int main(void) {
    int list[100];

    for (int i = 0; i < 100; i++) {
        list[i] = rand0() % 10 + 1;
    }
    sort_list(list, 100);
    for (int i = 0; i < 100; i++) {
        printf("%d ", list[i]);
    }
    return 0;
}

unsigned int rand0() {
    seed = seed * 1103515245 + 12345;
    return (unsigned int)(seed / 65536) % 32768;
}

void sort_list(int list[], int num) {
    int temp;
    int top, seek;

    for (top = 0; top < num - 1; top++) {
        for (seek = top; seek < num; seek++) {
            if ((list[top] - list[seek]) > 0) {
                temp = list[top];
                list[top] = list[seek];
                list[seek] = temp;
            }
        }
    }
}