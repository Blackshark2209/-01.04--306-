#include <stdio.h>
#include <string.h>
/*
void itoa(int  n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}
*/


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

void itoa_extended(int n, char s[], int width)
{
	int i, sign;
	int digit;
	
	sign = n;
	i = 0;
	
	do {
		digit = n % 10;
		
		if (digit < 0)
			digit = -digit;
		
		s[i++] = digit + '0';
		
	} while ((n /= 10) != 0);
	
	if (sign < 0)
		s[i++] = '-';
	
	while (i < width)
		s[i++] = ' ';
	
	s[i] = '\0';
	
	reverse(s);
}
