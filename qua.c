#include<stdio.h>
int main()
{
float a,b,c,root1,root2,discriminant;
printf("enter the value of a,b,c\n");
scanf("%f%f%f", &a, &b, &c);
discriminant = b*b-4*a*c;
if(discriminant < 0)
printf("\n\nroots are imaginary\n");
else
{
root1 = (-b + sqrt(discriminant))/(2.0*a);
root2 = (-b - sqrt(discriminant))/(2.0*a);
printf("\n\nroot1 = %5.2f\n\nroot2 = %5.2f\n",root1,root2);
}
return 0;
}
