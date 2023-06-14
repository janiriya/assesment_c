#include<stdio.h>

int main()
{
    char i,j;
    char count ='A';

    for(i='A'; i<='E' ;i++)
    {
        for(j='A' ;j<=i ; j++)
        {
            printf(" %c" , count);
            count++;
        }
        printf("\n");
    }
    
}