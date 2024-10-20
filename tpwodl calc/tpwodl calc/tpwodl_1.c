#include <stdio.h>


int main()
{
	printf("\t||Welcome to TPWODL, Sambalpur||\n");
	printf("Price for first 20 unit = 2.00Rs\n");
	printf("Price for the remaining units = 1.50Rs\n");
	
	int meterRead, remainUnit, bill, bill_s;
	meterRead = remainUnit = bill = bill_s = 0;


	
	printf("Enter your meter reading:");
	scanf_s("%d", &meterRead);

	printf("Your units = %d\n", meterRead);

	remainUnit = meterRead - 20;
	bill = meterRead * 2.00;
	bill_s = remainUnit * 1.50 + 40;


	if (meterRead <= 20) {

		remainUnit = meterRead - 20;
		bill = meterRead * 2.00;
		bill_s = remainUnit * 1.50 + 40;

		printf("Bill to be paid = %d\n", bill);


	}
	else
	{


		printf("Bill to be paid = %d\n", bill_s);


	}
	return 0;




}