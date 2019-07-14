#include <stdio.h>
#include <stdlib.h>

unsigned int rand0();
void sort_list(int [], int);

static int seed = 13;

int main(int args, char * argv[]) {
    seed = atoi(argv[1]);
    int list[100];
    int result[10];

    for (int i = 0; i < 1000; i++) {
        result[rand0() % 10]++;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d count: %d\n", i + 1, result[i]);
    }
    return 0;
}

unsigned int rand0() {
    seed = seed * 1103515245 + 12345;
    return (unsigned int)(seed / 65536) % 32768;
}