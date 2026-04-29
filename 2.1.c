#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	printf(" Целочисленные типы \n");
	
	printf("signed char:   %d .. %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char: 0 .. %u\n", UCHAR_MAX);
	printf("signed short:   %d .. %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short: 0 .. %u\n", USHRT_MAX);
	printf("signed int:   %d .. %d\n", INT_MIN, INT_MAX);
	printf("unsigned int: 0 .. %u\n", UINT_MAX);
	printf("signed long:   %ld .. %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long: 0 .. %lu\n", ULONG_MAX);
	
	printf("\n Целочисленные типы (вычисленные) \n");
	
	printf("signed char:   %d .. %d\n", -(1 << (sizeof(char)*8 - 1)), (1 << (sizeof(char)*8 - 1)) - 1);
	printf("unsigned char: 0 .. %u\n", (1U << (sizeof(char)*8)) - 1);
	printf("signed short:   %d .. %d\n", -(1 << (sizeof(short)*8 - 1)), (1 << (sizeof(short)*8 - 1)) - 1);
	printf("unsigned short: 0 .. %u\n", (1U << (sizeof(short)*8)) - 1);
	printf("signed int:   %d .. %d\n", -(1 << (sizeof(int)*8 - 1)), (1 << (sizeof(int)*8 - 1)) - 1);
	printf("unsigned int: 0 .. %u\n", (1U << (sizeof(int)*8)) - 1);
	printf("signed long:   %ld .. %ld\n", -(1L << (sizeof(long)*8 - 1)), (1L << (sizeof(long)*8 - 1)) - 1);
	printf("unsigned long: 0 .. %lu\n", (1UL << (sizeof(long)*8)) - 1);
	
	printf("\n Вещественные типы \n");
	
	printf("float:  %e .. %e\n", FLT_MIN, FLT_MAX);
	printf("double: %e .. %e\n", DBL_MIN, DBL_MAX);
	printf("long double: %Le .. %Le\n", LDBL_MIN, LDBL_MAX);
	
	return 0;
}

