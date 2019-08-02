#include <stdio.h>
#define SIZE 10

int binarySearch(int [], int, int);

int main(void) {
    int arr[SIZE] = {0,1,2,3,4,5,6,7,8,9};
    int d;
    while (scanf("%d", &d) == 1) {
        printf("result is %d\n", binarySearch(arr, SIZE, d));
    }
    
}

int binarySearch(int arr[], int size, int d) {
    int left = 0;
    int right = size - 1;
    int mid;

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == d) return 1;
        else if (arr[mid] < d) left = mid + 1;
        else right = mid - 1;
    }
    
    return 0;
}
