#include <stdio.h>
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

void reverse(char s[])
{
	int i, j;
	char temp;
	
	int len = 0;
	while (s[len] != '\0')
		len++;
	
	for (i = 0, j = len - 1; i < j; i++, j--) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

int main()
{
	char line[MAXLINE];
	int len;
	
	while ((len = getline(line, MAXLINE)) > 0) {
		if (line[len - 1] == '\n') {
			line[len - 1] = '\0';
			len--;
		}
		
		reverse(line);
		
		printf("%s\n", line);
	}
	
	return 0;
}


