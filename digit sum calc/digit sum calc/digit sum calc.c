
/*This is a digit sum calculator
You can put any 5 digit number and it will tell you the sum of
every individual digit in that number
Created by - Shibasis Panda*/
//Solution of a question in Let Us C by YK

#include <stdio.h>

int main()
{
	int n = 0, quo1, quo2, quo3, quo4, rem1, rem2, rem3, rem4, sum;	//Declaration of variables

	printf("Enter a five digit number: ");		//Input Message
	scanf_s("%d", &n);		//Input assigned to 'n'

	/*Calculations*/
	
	quo1 = n / 10000;
	rem1 = n % 10000;

	quo2 = rem1 / 1000;
	rem2 = rem1 % 1000;

	quo3 = rem2 / 100;
	rem3 = rem2 % 100;

	quo4 = rem3 / 10;
	rem4 = rem3 % 10;

	sum = quo1 + quo2 + quo3 + quo4 + rem4;		//Final sum of all individual digits

	printf("Sum of the digits=%d\n", sum);		//Output
	printf("This program is created by Shibasis Panda and is a solution to a question.");

	return 0;





}