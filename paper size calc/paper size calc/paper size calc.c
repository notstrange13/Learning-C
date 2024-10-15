
//Paper size calculator by Shibasis Panda

#include <stdio.h>

int main()
{

	//Declaration and Initialisation of variables

	int l1=1189, l2, l3, l4, l5, l6, l7, l8, l9;
	
	printf("The size of a A0 Paper is 1189mm * 841mm.\n");

	//Calculations
	
	l2 = l1 / 2;
	l3 = l2 / 2;
	l4 = l3 / 2;
	l5 = l4 / 2;
	l6 = l5 / 2;
	l7 = l6 / 2;
	l8 = l7 / 2;
	l9 = l8 / 2;

	//Output to be diplayed
	
	printf("\nThe subsequent sizes of different A(n) papers are listed below\n");

	printf("\tA1 = 841mm * %dmm\n", l2);
	printf("\tA2 = 841mm * %dmm\n", l3);
	printf("\tA3 = 841mm * %dmm\n", l4);
	printf("\tA4 = 841mm * %dmm\n", l5);
	printf("\tA5 = 841mm * %dmm\n", l6);
	printf("\tA6 = 841mm * %dmm\n", l7);
	printf("\tA7 = 841mm * %dmm\n", l8);
	printf("\tA8 = 841mm * %dmm\n", l9);

	return 0;





}