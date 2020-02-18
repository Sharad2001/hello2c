#include<stdio.h>
int main()
{
int month,days;
printf("enter the value of days\n");
scanf("%d",&days);
month=days/30;
days=days%30;
printf("%d month\n",month);
printf("%d days\n",days);
return 0;
}
