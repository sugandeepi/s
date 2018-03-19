#include<stdio.h>
#include<string.h>
int main()
{
    int k,i;
    char s[50];
    printf("enter the string:");
    gets(s);
    printf("enter the number:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        printf("%c",s[i]);
    }
return 0;
}
