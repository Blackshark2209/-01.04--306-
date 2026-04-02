#include <stdio.h>
#icnlude <locale.h>
float conv(float f);

int main()
{
	float f, c;
	int low, up, st;
	
	low = 0 
	up = 300;
	st = 20;
	
	f = low;
	
	while (f <= up) {
		c = conv(f);
		printf("%3.0f %6.1f\n", f, c);
		f = f + st;
	}
	
	return 0;
}

float conv(float f)
{
	float c;
	c = (5.0 / 9.0) * (f - 32.0);
	return c;
}













