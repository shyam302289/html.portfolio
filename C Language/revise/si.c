#include<stdio.h>
int main( )
{
    int principal,time;
    float rate,SI;
    printf("enter the amount\n");
    scanf("%d",&principal);

     printf("enter time period\n");
     scanf("%d",&time);

     printf("enter the rate\n");
     scanf("%f",&rate);

     SI=(principal*rate *time)/100;
     printf("the SI is %.3f",SI);


     return 0;

     
}