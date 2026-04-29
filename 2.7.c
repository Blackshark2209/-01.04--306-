#include <stdio.h>
#include <locale.h>

void print_binary(unsigned num);
unsigned invert(unsigned x, int p, int n);

int main()
{
	setlocale(LC_ALL, "");
	unsigned x, result;
	int p, n;
	
	x = 0b10101010;
	p = 5;
	n = 3;
	
	result = invert(x, p, n);
	
	printf("x = 0x%X (", x);
	print_binary(x);
	printf(")\n");
	printf("p = %d, n = %d\n", p, n);
	printf("Результат = 0x%X (", result);
	print_binary(result);
	printf(")\n");
	
	return 0;
}

unsigned invert(unsigned x, int p, int n)
{
	unsigned mask = ~(~0U << n) << (p + 1 - n);
	
	return x ^ mask;
}

void print_binary(unsigned num)
{
	for (int i = 31; i >= 0; i--) {
		putchar((num >> i) & 1 ? '1' : '0');
		if (i % 8 == 0 && i != 0) putchar(' ');
	}
}
