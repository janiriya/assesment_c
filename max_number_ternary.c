#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("enter the value for a:");
    scanf("%d",&a);

    printf("enter the value for b:");
    scanf("%d",&b);

    printf("enter the value for c:");
    scanf("%d",&c);

    int max=(a>b)?((a>b)?a:c):((b>c)?b:c);

    printf("the max number is =%d",max);
}