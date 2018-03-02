#include<stdio.h>
int main()
{
    int i,n,sum=0,avg,a[50];
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum/n);
}
