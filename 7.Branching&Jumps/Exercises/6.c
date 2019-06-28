#include <stdio.h>
int main(void) {
    char pre = ' ';
	char ch;
	int i = 0;

	printf("Enter something to test the program(# to quit): ");
	while ((ch = getchar()) != '#') {
        if (pre == 'e' && ch == 'i') i++;
        pre = ch;
	}
    printf("%d times\n", i);
	return 0;
}