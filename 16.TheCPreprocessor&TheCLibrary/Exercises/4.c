#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void delay(double sec);

int main(int argc, char * argv[]) {
    if (argc < 2) return 0;

    double sec = atof(argv[1]);
    delay(sec);
}

void delay(double sec) {
    double start = (double) clock();
    printf("Start!\n");
    while (1) {
        double now = (double) clock();
        double diff = (now - start) / CLOCKS_PER_SEC;
        if (diff >= sec) break;
    }
    
    printf("Finished!\n");
}