#include<stdio.h>

int main(){
    int num=0;

    scanf("%d", &num);

    if (num>=0)
    {
        printf("%d", num);
    }
    else
    {
        printf("%d", -1*num);
    }

    return 0;
    
}