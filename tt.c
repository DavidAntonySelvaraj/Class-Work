#include<stdio.h>
int main()
{
int a,b,c;
printf("type the value of triangle");
scanf("%d%d%d",&a,&b,&c);
if(a==b&&a==c&&c==b)
printf("equilateral triangle");
else
{
if(a==b&&a!=c)
printf("isosceles triangle");
else
{
if(c==a&&a!=b)
printf("isosceles triangle");
else
{
if(b==c&&a!=b)
printf("isosceles triangle");
else
{
if((a+b)>c&&(a+c)>b&&(b+c)>a)
printf("it is scalene triangle");
else
printf("invalid");
}
}
}
}
return 0;
}

