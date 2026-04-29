#include <stdio.h>
#include <locale.h>

void print_binary(unsigned num);
unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
	setlocale(LC_ALL, "");
	unsigned x, y, result;
	int p, n;
	
	x = 0b10101011;
	y = 0b10101010;
	p = 5;
	n = 3;
	
	result = setbits(x, p, n, y);
	
	printf("x = 0x%X (", x);
	print_binary(x);
	printf(")\n");
	printf("y = 0x%X (", y);
	print_binary(y);
	printf(")\n");
	printf("p = %d, n = %d\n", p, n);
	printf("Результат = 0x%X (", result);
	print_binary(result);
	printf(")\n");
	
	return 0;
}
/*
unsigned getbits(unsigned x, int p, int n)
{
return (x >> (p+1-n)) & ~(~0 << n) ;
}
*/

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return (x & ~(~(~0U << n) << (p + 1 - n))) |
	((y & ~(~0U << n)) << (p + 1 - n));
}

void print_binary(unsigned num)
{
	for (int i = 31; i >= 0; i--) {
		putchar((num >> i) & 1 ? '1' : '0');
		if (i % 8 == 0 && i != 0) putchar(' ');
	}
}
