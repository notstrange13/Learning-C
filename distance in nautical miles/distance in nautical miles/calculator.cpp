#include <stdio.h>
#include <math.h>

int main()
{
	float l1, l2, g1, g2, dis;

	l1 = l2 = g1 = g2 = 0;


	printf("Enter your first latitudes:");
	scanf_s("%f", &l1);

	printf("\nEnter you first longitude:");
	scanf_s("%f", &g1);

	printf("\nEnter your second latitude:");
	scanf_s("%f", &l2);

	printf("\nEnter your second longitude:");
	scanf_s("%f", &g2);

	//Calculations

	dis = 3963 * acosf(sinf(l1) * sinf(l2) + cosf(l1) * cosf(l2) * cosf(g2 - g1));

	printf("\nThe distance in nautical miles is %f\n", dis);

	return 0;



}