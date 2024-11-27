//Write a program to find out area and perimeter of a circle.

#include<stdio.h>

int main(){
    int rad=0;
    float area, peri;

    printf("Enter radius of the circle: ");
    scanf("%d", &rad);
    
    //calculations

    area = 3.14*rad*rad;
    peri = 2*3.14*rad;

    printf("Area= %f\n", area);
    printf("Perimete= %f\n", peri);

    return 0;

}