#include <stdio.h>
int max(double [], int);
int main(void) {
    double source[10] = { 2.0, 3.0, 5.0, 6.0, 3.0, 8.0, 9.0, 3.0, 6.0, 0.0 };
    printf("%d\n", max(source, 10));
    
    return 0;
}

int max(double array[], int size) {
    double max = array[0];
    int index = 0;
    for (int i = 1; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
            index = i;
        }
    }
    return index;
}
