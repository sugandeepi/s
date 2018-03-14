#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("enter the two numbersa and b:");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("product is %d\n",c);
    if(c%2==0)
    {
        printf("even");
    }
    else
    {
        printf("not even");
    }
    return 0;
}
