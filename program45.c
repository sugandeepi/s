#include<stdio.h>
int main()
{
int n,count=0;
printf("enter the number\n");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("no of digits in an integer is %d\n",count);
return 0;
}
