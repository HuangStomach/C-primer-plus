#include <stdio.h>
int main(void) {
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    while (scanf("%f", &score) == 1) {
        if (score < MIN || score > MAX) {
            continue;
        }

        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score;
        n++;
    }
    
    return 0;
}