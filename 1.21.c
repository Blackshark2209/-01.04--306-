#include <stdio.h>

#define MAXLINE 1000
#define TAB_STOP 8

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
	char line[MAXLINE];
	int len;
	int i, pos, spaces, tabs, remaining_spaces;
	
	while ((len = getline(line, MAXLINE)) > 0) {
		pos = 0;
		spaces = 0;
		
		for (i = 0; i < len; i++) {
			if (line[i] == ' ') {
				spaces++;
				pos++;
			} else if (line[i] == '\t') {
				int next_stop = ((pos / TAB_STOP) + 1) * TAB_STOP;
				spaces += (next_stop - pos);
				pos = next_stop;
			} else if (line[i] == '\n') {
				if (spaces > 0) {
					for (int j = 0; j < spaces; j++)
						putchar(' ');
					spaces = 0;
				}
				putchar('\n');
				pos = 0;
			} else {
				if (spaces > 0) {
					tabs = spaces / TAB_STOP;
					remaining_spaces = spaces % TAB_STOP;
					
					for (int j = 0; j < tabs; j++)
						putchar('\t');
					for (int j = 0; j < remaining_spaces; j++)
						putchar(' ');
					spaces = 0;
				}
				putchar(line[i]);
				pos++;
			}
		}
	}
	
	return 0;
}
