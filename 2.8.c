#include <stdio.h>
#include <locale.h>

unsigned rightrot(unsigned x, int n)
{
	int bit_width = sizeof(unsigned) * 8;
	
	n = n % bit_width;
	
	if (n == 0) {
		return x;
	}
	
	return (x >> n) | (x << (bit_width - n));
}

void print_binary(unsigned num)
{
	for (int i = 31; i >= 0; i--) {
		putchar((num >> i) & 1 ? '1' : '0');
		if (i % 8 == 0 && i != 0) putchar(' ');
	}
}

int main()
{
	setlocale(LC_ALL, "");
	unsigned x, result;
	int n;
	
	x = 0b10101010;
	n = 3;
	
	result = rightrot(x, n);
	
	printf("x = 0x%X (", x);
	print_binary(x);
	printf(")\n");
	printf("n = %d\n", n);
	printf("Результат = 0x%X (", result);
	print_binary(result);
	printf(")\n");
	
	return 0;
}

