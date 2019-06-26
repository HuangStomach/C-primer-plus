#include <stdio.h>
int main(void) {
    int start;
    int end;
    printf("plz input start & end:\n");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}
