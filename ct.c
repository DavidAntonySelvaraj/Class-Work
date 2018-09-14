#include<stdio.h>
int main()
{
int a,b,c;
printf("type the sides of triangle");
scanf("%d%d%d",&a,&b,&c);
if((a+b)>c&&(b+c)>a&&(c+a)>b)
printf("it forms a triangle");
else
printf("it does not forms a triangle");
return 0;
}
