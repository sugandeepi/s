#include<stdio.h>
int main()
{
int num1,num2;
printf("enter num1 and num2 values:");
scanf("%d %d",&num1,&num2);
printf("before swapping num1=%d,num=%d\n",num1,num2);
num1=num1^num2;
num2=num1^num2;
num1=num1^num2;
printf("after swapping num1=%d,num=%d",num1,num2);
return 0;
}
