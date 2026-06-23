#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
	int i, j;
	char temp;
	
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

void itob(int n, char s[], int b)
{
	int i, sign;
	int digit;
	
	if (b < 2 || b > 16) {
		s[0] = '\0';
		return;
	}
	
	sign = n;
	i = 0;
	
	do {
		digit = n % b;
		
		if (digit < 0)
			digit = -digit;
		
		s[i++] =
		(digit < 10)
		? digit + '0'
		: digit - 10 + 'A';
		
	} while ((n /= b) != 0);
	
	if (sign < 0)
		s[i++] = '-';
	
	s[i] = '\0';
	
	reverse(s);
}
