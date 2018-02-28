#include<stdio.h>
#include<string.h>
int main()
{
    int k,i;
    char s[50];
    printf("enter the string:");
    scanf("%s",&s);
    printf("enter the number:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        printf("%s\n",s);
    }
    return 0;
}


