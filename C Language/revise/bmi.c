#include<stdio.h>
int main()
{   
    float bmi,weight;
    float height;
    printf("Welcome to BMI Calculator to know how healthy you're ! \n");
    printf("Enter your Weight : \n");
    scanf("%f",&weight);

    printf("Enter your Height :\n");
    scanf("%f",&height);

    bmi=weight/pow(height,2);
    printf("your bmi is %.2f\n",bmi);

    if (bmi<18.5)
    {
        printf("you're underweight\n you have to gain mass");
    }

    else if(bmi>18.5&&bmi<24.9)
    {
       printf("you have normal weight");
    }

    else if(bmi>25&&bmi<29.9)
    {
        printf("you're overweight");
    }
    
    else{
        printf("you're obese");
    }
}