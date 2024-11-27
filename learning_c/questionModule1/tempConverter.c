//Write a program to enter the temperature in degree Celsius and display it in Fahrenheit and vice versa.

#include<stdio.h>

int main(){
    float cel=0.0, ferh;

    scanf("%f", &cel);

    //calculation

    ferh = (cel*1.8)+32;
    printf("%f", ferh);

    return 0;
}