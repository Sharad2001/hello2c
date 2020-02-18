#include<stdio.h>
int main()
{
int a,b,area,perimeter;
printf("enter the value of a,b\n");
scanf("%d%d",&a,&b);
area=(a*b);
printf("area of rectangle is %d \n",area);
perimeter=2*(a+b);
printf("perimeter of rectangle is %d \n",perimeter);
return 0;
}
