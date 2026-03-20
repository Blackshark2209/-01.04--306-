/* Упражнение 1.4. Напишите программу, 
которая будет печатать таблицу соответствия температур по Цельсию температурам по Фаренгейту.*/
//Выполнил Монастырский 306ИС-23
#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}





































