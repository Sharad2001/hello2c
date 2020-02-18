#include<stdio.h>
int main()
{
char operator;
double x,y;
printf("enter an operator (+,-,*,/) = \n");
scanf("%c", &operator);
printf("Enter two operands= \n ");
scanf("%lf %lf", &x, &y);
switch (operator)
{
case'+':
printf("%.1lf + %.1lf = %.1lf \n", x,y,x+y);
break;
case'-':
printf("%.1lf - %.1lf = %.1lf \n", x,y,x-y);
break;
case'*':
printf("%.1lf * %.1lf = %.1lf \n", x,y,x*y);
break;
case'/':
printf("%.1lf / %.1lf = %.1lf \n", x,y,x/y);
break;
default:
printf("error! operator is not correct");
}
return 0;
}
