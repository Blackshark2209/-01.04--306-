// Сделал Косолапов и Монастырский
#include <stdio.h>
#include <locale.h>

#define MAXLINE 1000

int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int main()
{
	setlocale(LC_ALL, "");
	char line[MAXLINE];
	int len;
	int i;
	int space;
	int empty_line;
	
	while ((len = getline(line, MAXLINE)) > 0) {
		space = 0;
		empty_line = 1;
		
		for (i = 0; i < len; i++) {
			if (line[i] == ' ' || line[i] == '\t') {
				if (!space && (i == 0 || (i > 0 && line[i-1] != '\n'))) {
					putchar(' ');
					space = 1;
				}
			} else if (line[i] == '\n') {
				if (!empty_line) {
					putchar('\n');
				}
				empty_line = 1;
				space = 0;
			} else {
				putchar(line[i]);
				empty_line = 0;
				space = 0;
			}
		}
	}
	
	return 0;
}
