#include <stdio.h>
int max(int [], int);
int main(void) {
    int source[10] = {2,3,5,6,3,8,9,3,6,0};

    printf("%d\n", max(source, 10));
    
    return 0;
}

int max(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < 10; i++) {
        if (array[i] > max) max = array[i];
    }
    return max;
}
