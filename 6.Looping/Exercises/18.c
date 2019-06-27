#include <stdio.h>
int main(void) {
    const int dunbar = 150;
    int friends = 5;

    int week = 1; 
    while (friends <= dunbar) {

        friends -= week;
        friends += friends;
        printf("friends:%d\n", friends);
    }
    
    return 0;
}
