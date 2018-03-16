#include<stdio.h>
int main()
{
        int i,n,a[10],greatest;
        printf("enter ten numbers:");
        for(i=0;i<=10;i++)
        {
                scanf("%d",&a[i]);
        }
        greatest=a[0];
        for(i=0;i<=10;i++)
        {
                if(a[i]>greatest)
        {
        greatest=a[i];
        }
        }
        printf("the max of 10 num is %d",greatest);
        return 0;
}
