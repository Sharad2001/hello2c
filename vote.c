#include<stdio.h>
int main()
{
int a;
printf("enter the value of a \n");
scanf("%d",&a);
if(a % 18 == 0)
{
printf("%d is eligible to vote \n", a);
}
else
printf("%d is not eligible to vote \n", a);
return 0;
}
