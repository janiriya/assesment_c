#include<stdio.h>

int main()
{
    int num;

    printf("enter the value for num:");
    scanf("%d",&num);

    if(num>0)
    {
        printf("the number is positive");
    }
    else if(num<0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("you entered the zero");
    }
}