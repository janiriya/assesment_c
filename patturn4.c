#include<stdio.h>

int main()

{    
    
    int count;
    int i,j;
    int k;
    
    for(i=1 ; i<=5 ;i++)
    {
        for(j=1 ; j<=i ;j++)
        {

          
          for(k=0;k<i;k++)
          {
            printf(" %d",j);
            count++;
          }
        }
        printf("\n");
    }

}