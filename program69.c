#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("c=%d",c);
    if(c%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
