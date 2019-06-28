#include <stdio.h>
int main(void) {
	char ch;
	int i = 0;
	int j = 0;

	printf("Enter something to test the program(# to quit): ");

	while ( (ch = getchar()) != '#') {
		if ('.' == ch) {
			i++;
			putchar('!');
		}
		else if ('!' == ch) {
			putchar('!');
			putchar('!');
			j++;
		}
		else putchar(ch);
	}
    printf("%d times",i + j);
	return 0;
}