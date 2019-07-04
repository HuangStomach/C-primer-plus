#include <stdio.h>
void revert(double [], int);
int main(void) {
    double source[10] = { 2.0, 3.0, 5.0, 6.0, 3.0, 8.0, 9.0, 3.0, 6.0, 0.0 };
    revert(source, 10);
    return 0;
}

void revert(double array[], int size) {
    double res[10];
    
    for (int i = 0; i < size; i++) {
        res[size - i - 1] = array[i];
    }
    for (int i = 0; i < size; i++) {
        printf("%lf\n", res[i]);
    }
}
