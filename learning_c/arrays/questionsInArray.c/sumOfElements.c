//Write a program in C to find the sum of all elements of the array

#include<stdio.h>

int main(){
    int x, sum, y[5];


    for(x=0; x<5; x++){
        printf("Enter the [%d]th element of Array: ", x);
        scanf("%d", &y[x]);
    }
    //reading out the values stored in the array
    for(x=0; x<5; x++){
        sum = sum + y[x];  
    }

    printf("Sum: %d\n", sum);

    return 0;
}