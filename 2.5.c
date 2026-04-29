#include <stdio.h>
#include <string.h>
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

int any(char s1[], char s2[])
{
	int i, j;
	
	for (i = 0; s1[i] != '\0'; i++) {
		for (j = 0; s2[j] != '\0'; j++) {
			if (s1[i] == s2[j]) {
				return i;
			}
		}
	}
	return -1;
}

int main()
{
	setlocale(LC_ALL, "");
	char s1[MAXLINE], s2[MAXLINE];
	int pos;
	
	printf("(s1): ");
	getline(s1, sizeof(s1));
	s1[strcspn(s1, "\n")] = '\0';
	
	printf("(s2): ");
	getline(s2, sizeof(s2));
	s2[strcspn(s2, "\n")] = '\0';
	
	pos = any(s1, s2);
	
	if (pos != -1) {
		printf("символ '%c' найден на позиции %d\n", s1[pos], pos);
	} else {
		printf("-1\n");
	}
	
	return 0;
}
