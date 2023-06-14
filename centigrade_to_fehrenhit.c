#include<stdio.h>

int main()
{
    float centigrade;

   printf("enter the value for centigrade:");
   scanf("%f" , &centigrade);

   float fh = centigrade*9/5+32;

   printf("the fehranhit is %f" , fh); 
}