#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the numbers:");
    scanf("%d %d",&num1,&num2);
    printf("%d %d before swapping\n",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("%d %d after swapping",num1,num2);
    return 0;
}
