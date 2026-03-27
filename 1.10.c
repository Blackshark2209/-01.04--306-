//Сделал Косолапов
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int c;
	
	while ((c = getchar()) != EOF){
		
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b') {
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else {
			putchar(c);
		}
	}	
}

			
