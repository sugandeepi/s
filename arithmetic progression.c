#include<stdio.h>
int main()
{
int n,a,d,i,sum=1;
printf("enter the values:\n",n,a,d);
scanf("%d %d %d",&n,&a,&d);
for(i=n;i>1;i--)
{
sum=sum+((n-1)*d);
}
sum=sum+a;
printf("arithmetic progression is %d",sum);
return 0;
}
