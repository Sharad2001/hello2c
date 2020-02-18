#include<stdio.h>
int main()
{
int x,y,z;
printf("enter the value of x,y,z\n");
scanf("%d%d%d",&x,&y,&z);
x=y;
{
printf("x=%d\n",x);

}
y=z;
{
printf("y=%d\n",y);
}
z=x;
{
printf("z=%d\n",z);

}
return 0;
}
