#include<stdio.h>
int main()
{
char t;
printf("type the letter of which r or R= red,y or Y=yellow and g orG=green ");
scanf("%c",&t);
if(t=='r'||t=='R')
printf("STOP!");
else
{
if(t=='y'||t=='Y')
printf("Get Ready!");
else
{
if(t=='g'||t=='G')
printf("GOO!");
else
printf("INVALID");
}
}
return 0;
}
