
//Calculator for the area, perimeter and circumference of a rectangle and circle respectively

//Created by Shibasis Panda

#include <stdio.h>

int main()
{

	//Declaration and Initialisation of variables

	int l = 0, b = 0, r = 0, arrect, peri;
	float arcirc, circ;

	//User input

	printf("Length of Rectangle: ");
	scanf_s("%d", &l);

	printf("Breadth of Rectangle: ");
	scanf_s("%d", &b);

	printf("Radius of circle: ");
	scanf_s("%d", &r);

	//Calculations

	arrect = l * b;
	peri = 2 * l + 2 * b;
	arcirc = 3.14 * r * r;
	circ = 2 * 3.14 * r;

	//Output to be displayed

	printf("Area of the rectangle = %d\n", arrect);
	printf("Perimeter of rectangle = %d\n", peri);
	printf("Area of circle = %f\n", arcirc);
	printf("Circumference of circle = %f\n", circ);

	return 0;

}