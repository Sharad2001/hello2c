#include<stdio.h>
int main()
{
int n,a=2;
int count =1;
printf("enter the length of sqr : \n");
scanf("%d",&n);
while(count<=n)
{

a *= a;
printf("%d\n",a);
count = count+1;
}
return 0;
}
