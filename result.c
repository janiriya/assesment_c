#include<stdio.h>

int main()
{
    int account;
    int stat;
    int gujarati;
    int economics;
    int english;

    printf("enter the marks for account:");
    scanf("%d",&account);

    printf("enter the marks for stat:");
    scanf("%d",&stat);

    printf("enter the marks for gujarati:");
    scanf("%d",&gujarati);

    printf("enter the marks for economics:");
    scanf("%d",&economics);

    printf("enter the marks for english:");
    scanf("%d",&english);

    int total = account + stat + gujarati + english + economics;

    printf("the total is %d\n", total);

    float per = total / 5;

    printf("persontage is %f\n", per);

    if( per > 90)
    {
        printf("first class");
    }
    else if( per<90 && per>80)
    {
        printf("second class");
    }
    else if( per<80 && per>75)
    {
        printf("third class");
    }
    else
    {
        printf("need hardwork");
    }
}   


















