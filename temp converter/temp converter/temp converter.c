#include <stdio.h>

//Temperature converter

int main()
{
	int ferh = 0, cel, calc;
	
	printf("Enter your temperature in Fahrenheit: ");
	
	scanf_s("%d", &ferh);

	calc = ferh - 32;
	cel = calc * 5 / 9;

	printf("Temperature in Celcius = %d\n", cel);	//Output

	return 0;


}