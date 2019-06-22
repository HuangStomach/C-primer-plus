#include <stdio.h>
#include <strings.h>
#define litre 3.785
#define metre 1.6709
int main(void) {
    float mile;
    float gallon;

    printf("请输入里程：");
    scanf("%f", &mile);
    printf("请输入油耗（加仑）：");
    scanf("%f", &gallon);

    printf("每加仑跑个%.1f英里吧\n", mile / gallon);

    printf("每升跑个%.1f吧\n", (mile * metre) / (gallon * litre * 100));

    return 0;
}