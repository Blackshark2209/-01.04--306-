//Сделал Косолапов и Монастырский
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int c;
	int spaces = 0; 
	int tabs = 0;
	int nlines = 0;
	
	
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			spaces++;
		else if (c == '\t')
			tabs++;
		else if (c == '\n')
			nlines++;
	}
	
	printf("Пробелы: %d\n", spaces);
	printf("Табуляции: %d\n", tabs);
	printf("Новые строки: %d\n", nlines);
	
	return 0;
}
