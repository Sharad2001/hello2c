#include<stdio.h>
int main()
{
int n,i;
float sum=0;
printf("enter the length of series \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum= sum+(float)1/i;
if(i==1)
printf("1 +");
else if(i==n)
printf("1/%d \n",i);
else
printf("1/%d + \n",i);
}
printf("sum of series = %f \n",sum);
return 0;
}
