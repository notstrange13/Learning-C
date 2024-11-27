#include<stdio.h>

int main()
{
    int n[10];      //size of array is defined or number of elements in the array is defined
    int i, j;

    for(i=0; i<10; i++)
    {
        scanf("%d", &n[i]);     //scans and puts the values in array
    }

    for(j=0; j<10; j++)
    {
        printf("%d\n", n[j]);   //prints the array
    }
    return 0;
}