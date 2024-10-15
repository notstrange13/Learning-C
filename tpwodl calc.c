#include <stdio.h>

int main()
{
	double meterRead, remainUnit, bill;
	remainUnit = meterRead - 20;
	
	printf("\t||Welcome to TPWODL, Sambalpur||\n");
	printf("Price for first 20 unit = 2.00Rs\n");
	printf("Price for the remaining units = 1.50Rs\n");

	printf("Enter your meter reading:");
	scanf_s("%f", &meterRead);

	if (meterRead == 20) {

		bill = meterRead * 2.00;

		printf("Bill to be paid = %f\n", bill);


	}
	else
	{
		bill = 40 + remainUnit * 1.50;

		printf("Bill to be paid = %f\n", bill);


	}
	return 0;




}