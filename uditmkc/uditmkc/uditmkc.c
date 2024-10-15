#include <stdio.h>

int main()
{
	int x, y;

	printf("Enter your first number:");
	scanf_s("%i", &y);

	printf("Enter your second number:");
	scanf_s("%i", &x);

	if (y < x) {

		printf("The first number is greater than the second number.\n");

		printf("%i is greater than %i", y, x);


	}

	if (x == y) {

		printf("Both are equal.");

	}

	else {
		
		printf("The first number is smaller than the second number.");

	}

	return 0;
}