#include<stdio.h>

int main()

{
    float pi;
    int r;

    printf("enter the value for pi:");
    scanf("%f", &pi);

    printf("enter the value for r:");
    scanf("%d", &r);

    int a = pi*r*r;

    printf("the area of circle is %d" , a);
}