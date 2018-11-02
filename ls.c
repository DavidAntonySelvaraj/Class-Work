#include<stdio.h>
int main()
{
int a[50];
int i,j,k,temp,n,min;
printf("enter the size of the aarray\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=0;j<n-1;j++)
{ min=j;
for(k=j+1;k<n;k++)
{
if(a[min]>a[k])
{
min=k;
if(min!=j)
{
temp=a[min];
a[min]=a[j];
a[j]=temp;
}
}
}
}
printf("sorted array is\n");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
