
/*This is a digit sum calculator
You can put any 5 digit number and it will tell you the sum of
every individual digit in that number
Created by - Shibasis Panda*/
//Solution of a question in Let Us C by YK

#include <stdio.h>

int main()
{
	int n=0, quo1, quo2, quo3, quo4, rem1, rem2, rem3, rem4, sum;

	printf("Enter a five digit number: ");
	scanf("%d", &n);

	quo1 = n / 10000;
	rem1 = n % 10000;

	quo2 = n / 1000;
	rem2 = n % 1000;

	quo3 = n / 100;
	rem3 = n % 100;

	quo4 = n / 10;
	rem4 = n % 10;

	sum = quo1 + quo2 + quo3 + quo4 + rem4;

	printf("Sum of the digits=%f\n", sum);
	printf("This program is created by Shibasis Panda and is a solution to a question.")





}