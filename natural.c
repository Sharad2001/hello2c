#include<stdio.h>
int main()
{
int i,sum=0;
for(i=1 ; i<=10 ; ++i)
{
printf(" %d numbers are = %d \n",i,i);
sum = sum + i;
}
printf("sum = %d \n",sum);
return 0;
}
