//Сделал Косолапов и Монастырский
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int c;
	int last_char = 0;
	
	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			putchar(c);
			last_char = 0;
		}
		
		else if (last_char == 0) {
			putchar(' ');
			last_char = 1;
		}
	}
	return 0;
}	
		
