#include<stdio.h>
int main()
{
int a[50];
int i,j,k,temp,n;
printf("enter the size of the array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=0;j<n-1;j++)
{
for(k=0;k<n-1-j;k++)
{
if(a[k]>a[k+1])
{
temp=a[k];
a[k]=a[k+1];
a[k+1]=temp;
}
}
}
printf("sorted array is\n");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
