#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a and b values:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("c=%d\n",c);
    if(c%2==1)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
    return 0;
}
