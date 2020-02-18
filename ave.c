#include<stdio.h>
int main()
{
float n,i=0,sum=0,average;
while(i<n)
{
scanf("%f",&n);
sum = sum+n;
i=i+1;
}
average = sum/n;
printf("n=%f \n",n);
printf("sum=%f \n",sum);
printf("average=%f\n",average);
return 0;
}
