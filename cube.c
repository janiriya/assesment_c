#include<stdio.h>

int main()

{
    int b;

    printf("enter the value for b:");
    scanf("%d", &b);

    int cube = b*b*b;

    printf("the cube value for %d", cube);
}