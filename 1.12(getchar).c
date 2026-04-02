// Сделал Косолапов
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int c;
	int in_word = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (in_word) {
				putchar('\n');
				in_word = 0;
			}
		} else {
			putchar(c);
			in_word = 1;
		}
	}
	
	return 0;
}
