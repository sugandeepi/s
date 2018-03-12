#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers a and b:");
    scanf("%d %d",&a,&b);
    printf("the value of a is %d and b is %d before swapping\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("the value of a is %d and b is %d after swapping",a,b);
    return 0;
    
}
