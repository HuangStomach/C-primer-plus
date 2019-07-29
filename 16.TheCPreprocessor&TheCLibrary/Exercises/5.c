#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
void show(int [], int size, int num);

int main(void) {
    int array[SIZE] = { 123, 213, 34, 845, 6, 456, 732, 62, 3, 1256 };
    show(array, SIZE, 5);
}

void show(int array[], int size, int num) {
    if (num > size) {
        puts("That's too big!\n");
        exit(EXIT_FAILURE);
    }

    srand((unsigned) time(0));
    for (int i = 0; i < num; i++) {
       int index = rand() % size;

       printf("u got %d!\n", array[index]);
       int temp = array[index];
       array[index] = array[size - 1];
       array[size - 1] = temp;
       size--;
    }
}