#include<stdio.h>
int main()
{
int a,h,c;
char v;
printf("T FOR TEMPO \n C FOR CAR \n B FOR BUS");
scanf("%c",&v);
printf("type the no. of hours");
scanf("%d",&h);
switch(v)
{
case 'C':
{
if(h<=2)
{ 
c=h*20;
}
else
{a=h-2;
c=a*30+40;
}}
printf("the cost is %d",c);
break;
case 'c':
{
if(h<=2)
c=h*20;
else
a=h-2;
c=a*30+40;
}
printf("the cost is %d",c);
break;
case 'B':
{
if(h<=2)
{
c=h*40;
}
else
{
a=h-2;
}
c=a*50+80;
}
printf("the cost is %d",c);
break;
case 'b':
{
if(h<=2)
c=h*40;
else
a=h-2;
c=a*50+80;
}
printf("the cost is %d",c);
break;
case 'T':
{
if(h<=2)
c=h*30;
else
a=h-2;
c=a*40+60;
}
printf("the cost is %d",c);
break;
case 't':
{
if(h<=2)
c=h*30;
else
a=h-2;
c=a*40+60;
}
printf("the cost is %d",c);
}
return 0;
}
