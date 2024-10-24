#include <stdio.h>
#include <math.h>

int main()
{
	
	float x, y, sum, r, phi;

	x = y = 0;

	printf("Enter the X coordinate:");
	scanf_s("%f", &x);

	printf("\nEnter the Y coordinate:");
	scanf_s("%f", &y);

	sum = x * x + y * y;

	r = sqrtf(sum);

	phi = atanf(y / x);

	printf("\nThe coordinates in polar system would be-\n");
	printf("\nr = %f\n", r);
	printf("\nphi = %f\n", phi);

	return 0;

}