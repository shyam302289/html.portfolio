#include<stdio.h>
int main()
{
    char sam;
    float fahrenheit,celsius;
    printf("welcome to the temperture conversion\n ");
    printf("enter 1 for fahrenheit to celsius\n");
    printf("enter 2 for clesius to fahrenheit\n");
    scanf("%c",&sam);
    switch (sam)
    {
    case '1':
    printf("enter the temperature in celsius to get in fahrenheit\n");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("the temperature in fahrenheit is %.2f",fahrenheit);
        break;
    case '2':
    printf("enter the temperature in fahrenheit to get in celsius\n");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("the temperature in celsius is %.2f",celsius);
        break;

    default:
    printf("enter no. btw 1 and 2");
        break;
    }


}