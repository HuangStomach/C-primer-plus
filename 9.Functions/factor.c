#include <stdio.h>
long fact(int);
long rfact(int);
int main(void) {
    int num;

    printf("Enter 0-12:\n");
    while (scanf("%d", &num) == 1) {
        if (num < 0 || num > 12) printf("error\n");
        else {
            printf("loop: %d %ld", num, fact(num));
            printf("recursion: %d %ld", num, rfact(num));
        }
    }
    printf("bye\n");

    return 0;
}

long fact(int n) {
    long ans;

    for (ans = 1; n > 1; n--) {
        ans *= n;
    }

    return ans;
}

long rfact(int n) {
    long ans;

    if (n > 0) ans = n * rfact(n - 1);
    else ans = 1;

    return ans;
}
