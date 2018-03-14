#include<stdio.h>
int main()
{
    int n=0,n1=0,i;
    char a[50];
    printf("enter the string:");
    gets(a);
    for(i=0;a[i]=='\0';i++) 
    {
    if(a[i]>='0'&&a[i]<='9')
    {
        n++;
    }
    if(a[i]>='a'&&a[i]<='z')
    {
        n1++;
    }
    if(n>0&&n1>0)
    {
        printf("yes");
    
    }
else
{
    printf("no");
}
return 0;
}
}
