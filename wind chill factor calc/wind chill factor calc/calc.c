#include <stdio.h>
#include <math.h>

int main()
{

	float t, v, wcf;

	t = v = 0;

	printf("Temperature:");
	scanf_s("%f", &t);

	printf("Velocity of wind:");
	scanf_s("%f", &v);

	//Calculations

	wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * powf(v, 0.16);

	printf("Wind Chill Factor = %f\n", wcf);

	return 0;




}