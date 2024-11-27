#include<stdio.h>

int main(){
    int length=0, breadth=0, area, peri;

    printf("Length: ");
    scanf("%d", &length);
    printf("Breadth: ");
    scanf("%d", &breadth);

    area = length * breadth;
    peri = 2* (length + breadth);

    if (area>peri)
    {
        printf("Area greater than peri.");
    }
    else
    {
        printf("Area is smaller than peri.");
    }

    return 0;
    


}