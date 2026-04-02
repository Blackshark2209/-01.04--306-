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
	int i;
	int length;
	int in_word;
	int j;
	
	while (getline(line, MAXLINE) > 0) {
		i = 0;
		length = 0;
		in_word = 0;
		
		while (line[i] != '\0') {
			if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n') {
				if (in_word) {
					printf("%3d: ", length);
					for (j = 0; j < length; j++) {
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
			i++;
		}
	}
	
	return 0;
}
