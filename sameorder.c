#include<stdio.h>
int main()
{
 int n,i,a[20];
 printf("enter the number:");
 scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	scanf("%d",&a[i]);
  	printf("%d\t",a[i]);
  }
  return  0;
}
