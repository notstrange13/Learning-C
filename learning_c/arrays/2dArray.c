#include<stdio.h>

int main()
{
    int num[3][3];
    int i, j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter value to be displayed in [%d] [%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
    printf("Elements in the 2-D Array are:");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d", num[i][j]);
            if(j==3)
                printf("\n");
        }
    }
    return 0;
}