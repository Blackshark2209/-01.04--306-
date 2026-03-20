//Сделал: Косолапов и Монастырский
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	printf("Фаренгейт	Цельсия\n");
	printf("-------------------\n");
	
	fahr = upper;
	for (fahr = upper; fahr >= lower; fahr -= step) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%10.0f %10.1f\n", fahr, celsius);
	}
	
	return 0;
}
