#include<stdio.h>
int main()
{
int a,b;
printf("type the number");
scanf("%d",&a);
for(b=2;b<a;b++)
{
if(a%b==0)
printf("not prime");
else
printf("prime");
break;
}
return 0;
}
