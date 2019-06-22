#include <stdio.h>

int main(void) {
    float num;

    printf("请输入身高（厘米）：");
    scanf("%f", &num);
    
    printf("身高是 %.2f 米\n", num / 100);

    return 0;
}