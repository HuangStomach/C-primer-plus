#include <stdio.h>
int main(int argc, char *argv[]) {
    int count;
    for (count = 0; count < argc; count++) {
        puts(argv[count]);
    }
    
    return 0;
}