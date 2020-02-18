#include<stdio.h>
int main()
{
int no,re,var,binary=0,i=1;
printf("enter the number \n");
scanf("%d",&no);
var=no;
while(no!=0)
{
re=no%2;
no=no/2;
binary=binary+(re*i);
i=i*10;
}
printf("binary number of %d will be %d\n",var,binary);
return 0;
}
