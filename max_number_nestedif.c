#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("enter the value for a:");
    scanf("%d" ,&a);

    printf("enter the value for b:");
    scanf("%d" ,&b);

    printf("enter the value for c:");
    scanf("%d" ,&c);
    
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greter than b and c");
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            printf("b is greter than a and c");
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            printf("c is greter than a and b");
        }
    }
}