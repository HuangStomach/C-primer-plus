#include <stdio.h>
#include <stdlib.h>

#define NUM 5
#define SLEN 80

typedef struct names {
    char first[SLEN];
    char last[SLEN];
} NAME;

void fillarray(NAME ar[], int n);
void showarray(const NAME ar[], int n);
int mycomp(const void * p1, const void * p2);

int main(void) {
    NAME vals[NUM];
    fillarray(vals, NUM);
    puts("Random list:");
    showarray(vals, NUM);
    qsort(vals, NUM, sizeof(NAME), mycomp);
    puts("\nSorted list:");
    showarray(vals, NUM);
    return 0;
}

void fillarray(NAME ar[], int n) {
    ar[0] = (NAME) { "f", "g" };
    ar[1] = (NAME) { "h", "i" };
    ar[2] = (NAME) { "b", "c" };
    ar[3] = (NAME) { "a", "b" };
    ar[4] = (NAME) { "d", "e" };
}

void showarray(const NAME ar[], int n) {
    int index;

    for (index = 0; index < n; index++) {
        printf("[%s %s] ", ar[index].first, ar[index].last);
        if (index % 6 == 5) putchar('\n'); 
    }
    
    if (index % 6 != 0) putchar('\n');
}

int mycomp(const void * p1, const void * p2) {
    const NAME * a1 = (const NAME *) p1;
    const NAME * a2 = (const NAME *) p2;

    if (a1->first[0] < a2->first[0]) return -1;
    else if (a1->first[0] == a2->first[0]) return 0;
    else return 1;
}
