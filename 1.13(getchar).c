// Сделал Косолапов и Монастырский
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int c;
	int length = 0;
	int in_word = 0;
	int i;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (in_word) {
				printf("%3d: ", length);
				for (i = 0; i < length; i++) {
					printf("*");
				}
				printf("\n");
				length = 0;
				in_word = 0;
			}
		} else {
			if (!in_word) {
				in_word = 1;
			}
			length++;
		}
	}
	
	if (in_word) {
		printf("%3d: ", length);
		for (i = 0; i < length; i++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
