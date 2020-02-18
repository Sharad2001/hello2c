#include <stdio.h>
int main()
{
float i1,i2,no_of_i1,no_of_i2,average;
printf("enter the value of i1,i2 \n");
scanf("%f %f",&i1,&i2);
printf("enter the value of no. of items \n");
scanf("%f %f", &no_of_i1,&no_of_i2);
average=(i1*no_of_i1 + i2*no_of_i2)/(no_of_i1+no_of_i2);
printf("average = %f \n", average);
return 0;
}
