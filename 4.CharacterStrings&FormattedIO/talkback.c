#include <stdio.h>
#include <string.h>
#define DENSITY 62.4 // 人体密度
int main() {
    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hi，你的名字是啥？\n");
    scanf("%s", name);
    printf("%s, 那你多少磅重？\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("那么, %s, 你的体积是 %2.2f 立方英尺\n", name, volume);
    printf("并且你的名字由 %d 个字组成，耗费了我 %d 字节去存\n", letters, size);

    return 0;
}
