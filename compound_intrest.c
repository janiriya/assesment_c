#include<stdio.h>
#include<math.h>

int main()
{
    int principle;
    float rate;
    int num_of_year;

    printf("enter a principle: ");
    scanf("%d",&principle);

    printf("enter a rate of intrest:");
    scanf("%f",&rate);

    printf("enther a number of year:");
    scanf("%d",&num_of_year);

    float ci;

    float first = 1+rate/100;

    ci=principle*(pow(first , num_of_year)-1);

    printf("your compound intrest is %f",ci);




}