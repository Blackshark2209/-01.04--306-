#include <stdio.h>

#define TAB_STOP 8

int main()
{
	int c;
	int pos = 0;
	int spaces;
	int i;
	
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			spaces = TAB_STOP - (pos % TAB_STOP);
			for (i = 0; i < spaces; i++) {
				putchar('*');
				pos++;
			}
		} else if (c == '\n') {
			putchar(c);
			pos = 0;
		} else {
			putchar(c);
			pos++;
		}
	}
	 
	return 0;
}
