#include<stdio.h>
int main()
{
int j,i,a[50][50],t[50][50],n,m=0,v=0;
printf("type the size of the array");
scanf("%d",&n);
printf("type the values of the matrix a");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
              
             for(i=0;i<n;i++)
             {
             for(j=0;j<n;j++)
             {
             t[i][j]=a[j][i];
             }
             } 
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]==t[i][j])
{
m++;
}
else
{
v++;
}
}
}
if(m=n)
{
printf("%d",m);
}
else
{
printf("%d",v);
}
return 0;
}


