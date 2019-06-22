#include <stdio.h>
const int unit = 7;
int main(void) {
    int days = 1;

    while (days > 0) {
        printf("请输入天数：");
        scanf("%d", &days);
        printf("%d days are %d weeks, %d days\n", days, (int)(days / unit), (int)(days % unit));
    }

    return 0;
}