#include <stdio.h>


int main()
{
	double meterRead = 0, remainUnit, bill, bill_s;
	

	printf("\t||Welcome to TPWODL, Sambalpur||\n");
	printf("Price for first 20 unit = 2.00Rs\n");
	printf("Price for the remaining units = 1.50Rs\n");

	printf("Enter your meter reading:");
	scanf_s("%f", &meterRead);

	//printf("Your units = %f\n", meterRead);

	remainUnit = meterRead - 20;
	bill = meterRead * 2.00;
	bill_s = remainUnit * 1.50 + 40;


	if (meterRead <= 20) {

		

		printf("Bill to be paid = %f\n", bill);


	}
	else
	{
		

		printf("Bill to be paid = %f\n", bill_s);


	}
	return 0;




}