#include <stdio.h>

void expand(char s1[], char s2[])
{
	int i, j, c;
	
	i = j = 0;
	
	while ((c = s1[i]) != '\0') {
		if (s1[i + 1] == '-' &&
			s1[i + 2] != '\0' &&
			(
			 (c >= 'a' && c <= 'z' && s1[i + 2] >= 'a' && s1[i + 2] <= 'z') ||
			 (c >= 'A' && c <= 'Z' && s1[i + 2] >= 'A' && s1[i + 2] <= 'Z') ||
			 (c >= '0' && c <= '9' && s1[i + 2] >= '0' && s1[i + 2] <= '9')
			 ) &&
			 c <= s1[i + 2])
		{
			int end = s1[i + 2];
			
			while (c <= end)
				s2[j++] = c++;
			
			i += 3;
		}
		else {
			s2[j++] = s1[i++];
		}
	}
	
	s2[j] = '\0';
	
}
int main()
{
	char s1[] = "a-zA-Z0-9";
	char s2[200];
	
	expand(s1, s2);
	
	printf("%s\n", s2);
	
	return 0;
}
