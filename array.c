#include<stdio.h>

int main()
{
   int array1[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("enter the value for [%d][%d]:",i,j);
            scanf("%d",&array1[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf(" %d",array1[i][j]);
        }
        printf("\n");
    }

    printf("------------------------------\n");

    int array2[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("enter the value for [%d][%d]:",i,j);
            scanf("%d",&array2[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf(" %d",array2[i][j]);
        }
        printf("\n");
    }
    
     printf("------------------------------\n");

     
}
    
   
