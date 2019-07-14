#include <stdio.h>
#include <stdlib.h>
int num();

int main(int args, char * argv[]) {
    int count = atoi(argv[1]);
    for (int i = 1; i < count; i++) {
        num();
    }
    printf("调用了 %d 次\n", num());
}

int num() {
    static int count = 0;
    return ++count;
}