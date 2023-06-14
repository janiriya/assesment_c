
int main()
{
    int account;
    int stat;
    int english;
    int gujarati;
    int economics;

    printf("enter the value for account:");
    scanf("%d",&account);

    printf("enter the value for stat:");
    scanf("%d",&stat);

    printf("enter the value for english:");
    scanf("%d",&english);

    printf("enter the value for gujarati:");
    scanf("%d",&gujarati);

    printf("enter the value for economics:");
    scanf("%d",&economics);

    int total=account+stat+english+gujarati+economics;

    printf("the total is %d\n",total);

    float per= total/5;
    
    printf("persontage is %f\n",per);

    if(per>75)
    {
        printf("distinction");
    }
    else if(per>60 && per<=75 )
    {
        printf("first class");
    }
    else if(per>50 && per<=60)
    {
        printf("second class");
    }
    else if(per>35 && per<=35)
    {
        printf("pass class");
    }
    else
    {
        printf("fail");
    }
}   







