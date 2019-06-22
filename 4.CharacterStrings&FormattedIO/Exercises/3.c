#include <stdio.h>

int main(void) {
    float num;

    printf("请输入浮点数：");
    scanf("%f", &num);
    
    printf("The input is %2.1f or %.1e\n", num, num);
    printf("The input is %+2.3f or %.3e\n", num, num);

    return 0;
}