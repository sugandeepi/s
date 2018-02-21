#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,a[10],temp,n;
printf("enter the size of an array");
scanf("%d",&n);
printf("enter the elements in an array");
for(i=1;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
 {
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("sorted array);
for(i=0;i<=n;i++)
{
printf("%d\t",a[i])
}
return 0;
}
