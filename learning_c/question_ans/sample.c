#include<stdio.h>

//Input five numbers from keyboard, reverse the number and determine if it is same as the original number.

int main(){

    int num, num2, q1, r1, q2, r2, q3, r3, q4, r4;

    printf("Enter a five digit number: ");
    scanf("%d", &num);

    //calculations

    q1=num/10000;   //First digit
    r1=num%10000;   //Four digit number remainder

    q2=r1/1000;     //Second digit
    r2=r1%1000;     //Three digit number remainder

    q3=r2/100;      //Third digit
    r3=r2%100;      //Two digit number remainder

    q4=r3/10;       //Fourth digit
    r4=r3%10;       //Last digit of the original number

    num2= (r4*10000)+(q4*1000)+(q3*100)+(q2*10)+q1;     //reversed number

    printf("The reversed number is %d.\n", num2);

    if(num2==num){
        printf("The reversed number is same.\n");
    }
    else{
        printf("The reversed number is not same.\n");
    }





}