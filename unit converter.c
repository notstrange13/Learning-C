#include<stdio.h>
int main()
{
	float km, mt, ft, in, cm;
	printf("Enter your distance in KMs:");
	scanf_s("%f", &km);
	
	mt = 1e3 * km;
	ft = 3280.84 * km;
	in = 39370.1 * km;
	cm = 1e5 * km;

	printf("Distance in Kilometers=%f\n", km);



}