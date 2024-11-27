#include<stdio.h>

void main(){
    int num, i=0;

    printf("Enter the last number you want to print :");
    scanf("%d", &num);

    while (i<=num){

        printf("%d\n", i);

        i++;

    }
}