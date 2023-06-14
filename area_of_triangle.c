#include<stdio.h>

int main()

{

    int b;
    int h;

    printf("enter the value for b:");
    scanf("%d" , &b);

    printf("enter the value for h:");
    scanf("%d" , &h);

    int a = b*h/2;

    printf("the area of triangle is %d" , a);
}