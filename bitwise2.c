#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the numbers:");
    scanf("%d %d",&num1,&num2);
    printf("the value of num1 is %d and the value of num2 is %d before swapping\n",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("the values of num1 is %d and the value of num2 is %d after swapping",num1,num2);
    return 0;
}
