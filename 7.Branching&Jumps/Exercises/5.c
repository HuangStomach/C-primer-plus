#include <stdio.h>
int main(void) {
	char ch;
	int i = 0;
	int j = 0;

	printf("Enter something to test the program(# to quit): ");
	while ((ch = getchar()) != '#') {
		switch (ch) {
		case '.':
			i++;
			putchar('!');
			break;
		case '!':
			putchar('!');
			putchar('!');
			j++;
			break;
		default:
			putchar(ch);
			break;
		}
	}
    printf("%d times\n",i + j);
	return 0;
}