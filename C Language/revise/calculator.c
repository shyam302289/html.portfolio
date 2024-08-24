#include<stdio.h>
int main()
{
   double a,b;
   char sam;
   printf("simple calculator\n");
   printf("enter 1 for addition\nenter 2 for subtraction\nenter 3 for multilplication\nenter 4 for division\n");
   scanf("%c",&sam);

   printf("enter the first and the second number \n");
   scanf("%lf %lf",&a,&b);

   switch (sam)
   {
       case '1':
        printf("%.2lf+%.2lf=%.2lf",a,b,a+b); /* code */
       break;

       case '2':
          printf("%.2lf-%.2lf=%.2lf",a,b,a-b);
       break;

       case '3':
            printf("%.2lf*%.2lf=%.2lf",a,b,a*b);
       break;

       case '4':
            printf("%.2lf/%.2lf=%.2lf",a,b,a/b);
       break;
   
      default:
            printf("you've entered a wrong command\nplz enter a number btw 1-4");
       break;
   }
}