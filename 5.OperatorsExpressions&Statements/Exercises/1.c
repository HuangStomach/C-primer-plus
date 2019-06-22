#include <stdio.h>
const int unit = 60;
int main(void) {
    
    int minutes = 1; 
    while (minutes > 0) {
        printf("请输入分钟数:");
        scanf("%d", &minutes);
        printf("时间为 %d 小时 %d 分钟\n", (int)(minutes / unit), (int)(minutes % unit));
    }

    return 0;
}