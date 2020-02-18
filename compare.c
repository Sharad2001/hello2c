#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a,b,c \n");
scanf("%d %d %d",&a,&b,&c);
if(a>=b)
{
if(a>=c)
printf("%d is larger among them \n",a);
}
if(b>=a)
{
if(b>=c)
printf("%d is larger among them \n",b);
else
printf("%d is larger among them \n",c);
}
return 0;
}

