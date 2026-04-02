// Сделал Косолапов и Монастырский
#include <stdio.h>
#include <locale.h>

#define MAXLINE 1000

int getline(char s[], int lim)
{
	int c, i;
	
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';
	return i;
}

int main() {
	setlocale(LC_ALL, "");
	
	char line[MAXLINE];
	int elements[256] = {0};
	int i, j, k;
	
	while (getline(line, MAXLINE) > 0) {
		for (i = 0; line[i] != '\0'; i++) {
			if (line[i] >= 0 && line[i] < 256) {
				elements[(unsigned char)line[i]]++;
			}
		}
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
