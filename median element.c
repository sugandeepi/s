#include<stdio.h>
#include<conio.h>
int main()
{
int a[]={2,5,6,3,1,4};
int n=sizeof(a)/sizeof(int);
printf("the median element is %d",a[n/2]);
return 0;
}
