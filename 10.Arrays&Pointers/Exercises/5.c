#include <stdio.h>
double diff(double [], int);
int main(void) {
    double source[10] = { 2.0, 3.0, 5.0, 6.0, 3.0, 8.0, 9.0, 3.0, 6.0, 0.0 };
    printf("%lf\n", diff(source, 10));
    
    return 0;
}

double diff(double array[], int size) {
    double max = array[0];
    double min = array[0];
    for (int i = 1; i < 10; i++) {
        if (array[i] > max) max = array[i];
        if (array[i] < min) min = array[i];
    }
    return max - min;
}
