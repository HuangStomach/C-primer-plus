#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
int main(void) {
    char name[40];

    printf("你的名字是什么？");
    scanf("%s", name);
    printf("你好， %s。 %s\n", name, PRAISE);
    printf("你的名字有 %zd 个字并且消耗了 %zd 个内存\n", strlen(name), sizeof name);
    printf("短语PRAISE有 %zd 个字并且消耗了 %zd 个内存\n", strlen(PRAISE), sizeof PRAISE);

    return 0;
}