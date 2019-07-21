#include <stdio.h>
#define SIZE 4

void function_a();
void function_b();
void function_c();
void function_d();

int main(void) {
    void (*pt[SIZE])(void) = {
        function_a, function_b, function_c, function_d
    };
    
    int selection;
    while (scanf("%d", &selection) == 1) {
        pt[selection]();
    }
    
    return 0;
}

void function_a() {
    printf("I'm function a\n");
}

void function_b() {
    printf("I'm function b\n");
}

void function_c() {
    printf("I'm function c\n");
}

void function_d() {
    printf("I'm function d\n");
}
