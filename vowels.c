#include <stdio.h>
int main()
{
char c;
printf("enter any alphabets = \n");
scanf("%c", &c);
switch(c)
{
case'a':
case'A':
printf("vowels \n");
break;
case'e':
case'E':
printf("vowels \n");
break;
case'i':
case'I':
printf("vowels \n");
break;
case'o':
case'O':
printf("vowels \n");
break;
case'u':
case'U':
printf("vowels \n");
break;
default:
printf("not vowels \n");
break;
}
return 0;
}
