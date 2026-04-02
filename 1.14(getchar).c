// Сделал Косолапов и Монастырский
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int c;
	int elements[256] = {0};
	int i, j;
	
	while ((c = getchar()) != EOF) {
		elements[c]++;
	}
	
	for (i = 'a'; i <= 'z'; i++) {
		if (elements[i] > 0) {
			printf("%c (%3d): ", i, elements[i]);
			for (j = 0; j < elements[i]; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	
	for (i = 'A'; i <= 'Z'; i++) {
		if (elements[i] > 0) {
			printf("%c (%3d): ", i, elements[i]);
			for (j = 0; j < elements[i]; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	
	for (i = '0'; i <= '9'; i++) {
		if (elements[i] > 0) {
			printf("%c (%3d): ", i, elements[i]);
			for (j = 0; j < elements[i]; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	
	return 0;
}
