#include <stdio.h>
int main(void) {
    int height;

    printf("请输入身高（英寸）");
    scanf("%d", &height);
    printf("身高为%.2f厘米\n", height * 2.54);

    return 0;
}