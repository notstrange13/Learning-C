#include<stdio.h>

int main(){

    int ram=0, shyam=0, ajay=0;

    printf("Enter the age of Ram: ");
    scanf("%d", &ram);
    printf("Enter the age of Shyam: ");
    scanf("%d", &shyam);
    printf("Enter the age of Ajay: ");
    scanf("%d", &ajay);

    if (ram>shyam && ram>ajay)
    {
        printf("Ram is the eldest.\n");
    }
    else if (shyam>ram && shyam>ajay)
    {
        printf("Shyam is the eldest.\n");
    }
    else if (ajay>ram && ajay>shyam)
    {
        printf("Ajay is the eldest.\n");
    }
    else if (ram==shyam==ajay)
    {
        printf("Three are of same age.\n");
    }
    else
    {
        printf("Enter a valid age.\n");
    }
    

    return 0;
        
    
    
}