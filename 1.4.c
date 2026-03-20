//Сделал: Косолапов и Монастырский
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	float celsius, fahr;
	int lower, upper, step;
	
	lower = 0;
	upper = 100;
	step = 10;
	
	printf("Цельсий	Фаренгейт\n");
	printf("-----------------\n");
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%7.0f %10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	
	return 0;
}
