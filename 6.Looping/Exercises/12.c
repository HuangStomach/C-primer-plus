#include <stdio.h>
int main(void) {
    int count;
    const double flag = 1.0;
    scanf("%d", &count);
    double sum = 0.0;

    double symbol = -1.0;
    for (int i = 1; i <= count; i++) {
        sum += flag / (flag * i);
        symbol *= -1.0;
        sum += flag / (flag * i) * symbol;
    }
    printf("%lf\n", sum);
    return 0;
}
