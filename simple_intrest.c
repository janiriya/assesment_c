#include<stdio.h>

int main()
{
    int p;
    float r;
    int n;

    printf("enter the value for p:");
    scanf("%d" , &p);

    printf("enter the value for r:");
    scanf("%f" , &r);

    printf("enter the value for n:");
    scanf("%d" , &n);

    int i = p * r * n /100;

    printf("your simple intrest is %d" , i);

    
}