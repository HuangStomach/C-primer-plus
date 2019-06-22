#include <stdio.h>
int main(void) {
    int kk;

    printf("夸克：");
    scanf("%d", &kk);
    printf("共有%f个水分子\n", 950 / 3e-23 * kk);

    return 0;
}