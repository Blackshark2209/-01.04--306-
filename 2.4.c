#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAXLINE 1000

void squeeze(char s1[], char s2[])
{
	int i, j, k;
	int flag;
	
	for (i = j = 0; s1[i] != '\0'; i++) {
		flag = 0;
		for (k = 0; s2[k] != '\0'; k++) {
			if (s1[i] == s2[k]) {
				flag = 1;
				break;
			}
		}
		if (!flag) {
			s1[j++] = s1[i];
		}
	}
	s1[j] = '\0';
}

int main()
{
	setlocale(LC_ALL, "");
	char s1[MAXLINE], s2[MAXLINE];
	
	printf("(s1): ");
	fgets(s1, sizeof(s1), stdin);
	s1[strcspn(s1, "\n")] = '\0';
	
	printf("(s2): ");
	fgets(s2, sizeof(s2), stdin);
	s2[strcspn(s2, "\n")] = '\0';
	
	squeeze(s1, s2);
	
	printf("Результат: \"%s\"\n", s1);
	
	return 0;
}
