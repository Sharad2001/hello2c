#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a : \n");
scanf("%d",&a);
a>>=2;
b=a;
printf("shift value b = %d \n",b);
return 0;
}
