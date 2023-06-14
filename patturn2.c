#include<stdio.h>

int main()

{    
    
    int count;
    int i,j;
    
    for(i=1 ; i<=5 ;i++)
    {
        for(j=1 ; j<=i ;j++)
        {
            printf(" %d",i);
            count++;
        }
        printf("\n");
    }

}