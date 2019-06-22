#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void) {
    printf("有这些限制：\n");
    printf("int最大值：%d\n", INT_MAX);
    printf("long long最小值：%lld\n", LLONG_MIN);
    printf("1字节=%d比特\n", CHAR_BIT);
    printf("double最大值：%e\n", DBL_MAX);
    printf("float最小值：%e\n", FLT_MIN);
    printf("float有效位数：%d\n", FLT_DIG);
    printf("float差异值：%e\n", FLT_EPSILON);

    return 0;
}