#include <stdio.h>

int main()
{
	float meterRead=0, remainUnit, bill;

	printf("\t||Welcome to TPWODL, Sambalpur||\n");
	printf("\tThe cost of first 20 units is 2Rs.\n");
	printf("\tThe cost of rest of the units is 1.5Rs.\n");
	printf("\tEnter your meter reading:");
	scanf_s("%f", &meterRead);

	//Cost of first 20 units is 2Rs
	//Cost of rest of the unit is 1.5Rs

	if (meterRead <= 20) {

		bill = meterRead * 2;

		printf("\tAmount to be paid = %fRs\n", bill);


	}
	else
	{
		remainUnit = meterRead - 20;
		bill = 40 + remainUnit*1.5;

		printf("\tAmount to be paid = %fRs\n", bill);


	}
	return 0;
}