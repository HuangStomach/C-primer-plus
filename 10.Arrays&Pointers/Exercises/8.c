#include <stdio.h>
void copy_ptr(double *, double *, int);
int main(void) {
    double source[7] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
    double target[3];
    copy_ptr(target, source + 2, 3);

    for (int i = 0; i < 3; i++) {
        printf("%lf\n", target[i]);
    }
    
    return 0;
}

void copy_ptr(double * target, double * source, int size) {
    for (int i = 0; i < size; i++) {
        *(target + i) = *(source + i);
    }
}
