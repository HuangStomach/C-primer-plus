#include <stdio.h>
int main(int argc, char * args[]) {
    char * strs[argc - 1];
    int i = 0;
    for (i = argc - 1; i > 0; i--) {
        strs[argc - i - 1] = args[i];
    }

    for (i = 0; i < argc - 1; i++) {
        printf("string is %s\n", strs[i]);
    }

    return 0;
}