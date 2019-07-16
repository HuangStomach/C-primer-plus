#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    for (int i = 1; i < argc; i++) {
        fp = fopen(argv[i], "r");
        if (fp == NULL) continue;
        printf("%s\n", argv[i]);
    }
    printf("Done.\n");
    return 0;
}