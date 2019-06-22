#include <stdio.h>

int main(void) {
    float speed;
    float size;

    printf("请输入下载速度(Mb/s)：");
    scanf("%f", &speed);
    printf("请输入文件大小(MB)：");
    scanf("%f", &size);
    
    printf("At %.2f megabits per second, afile of %.2f megabytes\n"
    "downloads in %.2f seconds", speed, size, size / speed * 8);

    return 0;
}