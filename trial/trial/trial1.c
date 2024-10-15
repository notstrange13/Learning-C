#include <stdio.h>

int main()
{
	double x, y;
 
	
	printf("Enter your first number:");
	scanf_s("%f", &x);

	printf("Enter you second number:");
	scanf_s("%f", &y);

	if (x > y) {
		printf("You first number is greater than the second number.");
	}
	
	if (x == y) {
		printf("Both the numbers are equal.");
	}
	
	else
	{
		printf("You first number is smaller than the second number.");
	}
	return 0;
}