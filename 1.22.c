#include <stdio.h>

#define MAXLINE 1000
#define N 40 //Максимальная длинна строки  

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

int find_last_space(char s[], int limit)
{
	int i;
	for (i = limit - 1; i >= 0; i--) {
		if (s[i] == ' ' || s[i] == '\t')
			return i;
	}
	return -1;
}

void print_transfered(char s[], int n) //печать строки с переносом
{
	int len = 0;
	int start = 0;
	int last_space;
	int i;
	
	while (s[len] != '\n' && s[len] != '\0')
		len++;
	
	while (start < len) {
		if (len - start <= n) {
			for (i = start; i < len; i++)
				putchar(s[i]);
			putchar('\n');
			break;
		}
		
		last_space = find_last_space(s + start, n);
		
		if (last_space != -1) {
			for (i = start; i < start + last_space; i++)
				putchar(s[i]);
			putchar('\n');
			start = start + last_space + 1;
		} else {
			for (i = start; i < start + n; i++)
				putchar(s[i]);
			putchar('\n');
			start = start + n;
		}
	}
}

int main()
{
	char line[MAXLINE];
	int len;
	
	while ((len = getline(line, MAXLINE)) > 0) {
		print_transfered(line, N);
	}
	
	return 0;
}
