#include<stdio.h>
int main()
{
int i,greatest,n,a[10];
printf("enter ten numbers:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i])
}
greatest=a[0];
for(i=0;i<10;i++)
{
if(a[i]>greatest)
{
greatest=a[i];
}
}
printf("the greatest no of 10 num is %d",greatest");
return 0;
}
