#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * args[]) {
    double value = atof(args[1]);
    int count = atoi(args[2]);

    double result = 1.0;
    int i;
    for (i = 0; i < count; i++) {
        result *= value;
    }

    printf("%lf\n", result);
    return 0;
}