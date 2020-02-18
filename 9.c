#include<math.h>
int main()
{
float a,b,c,S,A;
printf("enter the value of a,b,c \n");
scanf("%f",&a,&b,&c);
S=(a+b+c)/2;
printf("%f is S \n",S);
A=sqrt(S(S-a)(S-b)(S-c));
printf("%f is A \n",A);
return 0;
}
