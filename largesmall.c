#include <stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a,b,c \n");
scanf("%d  %d  %d", &a,&b,&c);
if(a<b&&a<c)
{
printf("%d is smallest \n",a);
}
else if (b<c)
{
printf("%d is smallest \n",b);
}
else
{
printf("%d is smallest \n",c);
}
if(a>b&&a>c)
{
printf("%d is largest \n",a);
}
else if(b>c)
{
printf("%d is largest \n",b);
}
else
{
printf("%d is largest \n",c);
}
return 0;
} 
