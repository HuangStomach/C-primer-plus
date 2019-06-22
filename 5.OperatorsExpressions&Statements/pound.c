#include <stdio.h>
void pound(int n);
int main(void) {
    int times = 5;
    char ch = '!';
    float f = 6.0f;
    
    pound(times);
    pound(ch);
    pound(f);
}

void pound(int n) {
    while (n-- > 0) print("\n#");
    printf("\n");
}
