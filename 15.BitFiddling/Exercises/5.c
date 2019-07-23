#include <stdio.h>
#include <limits.h>
#include <strings.h>

int rotate_l(int, int);

int main(void) {
    printf("%d\n", rotate_l(64, 3));
    printf("%d\n", rotate_l(63, 3));
    printf("%d\n", rotate_l(12, 3));
}

int rotate_l(int n, int m) {
    int i, j, temp;
    int result = 0;
    static int size = 8 * sizeof(int);
    char ps[size];

    for (i = size - 1; i >= 0; i--, n >>= 1) {
        ps[i] = (01 & n) + '0';
    }

    for (i = 0; i < m; i++) {
        temp = ps[0];
        for (j = 0; j < size - 1; j++) {
            ps[j] = ps[j + 1];
        }
        ps[size - 1] = temp;
    }
    for (i = size - 1; i >= 0; i--) {
        result += (ps[i] - '0') * (1 << (size - 1 - i));
    }
    return result;
}