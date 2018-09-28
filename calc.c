#include<stdio.h>
int main()
{
int a,b;
char c;
printf("type the value of a and b");
scanf("%d%d",&a,&b);
printf("+ for addition\n-for subraction\n/for dividion\n% for modulo");
scanf("%c",&c);
switch(c)
{
case '+':
c=a+b;
printf("the required answer is",c);
break;
case '-':
c=a-b;
printf("the required answer is",c);
break;
case '/':
c=a/b;
printf("the required answer is",c);
break;
case '%':
c=a%b;
printf("the required answer is".c);
}
return 0;
}
