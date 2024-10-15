/*This is a gross salary calculator
This is a user interactive calculator*/


#include <stdio.h>
int main()
{
	float bs, da, hr, gpay;				
	printf("Enter your Base Salary:");
	scanf_s("%f", &bs); 

	/*Formulas*/

	da = 0.4 * bs;
	hr = 0.2 * bs;
	gpay = bs + da + hr;
	printf("Your Base Salary=%f\n", bs);
	printf("Dearness allowence=%f\n", da);
	printf("House rent allowence=%f\n", hr);
	printf("Gross salary paid=%f\n", gpay);

	return 0;
}