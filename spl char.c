#include<stdio.h>
#include<string.h>
int main()
{
int i,spl=0;
char str[100];
printf("enter the string:");
gets(str);
for(i=0;i<strlen(str);i++)
{
if(str[i]>=0&&str[i]<=47||str[i]>=58&&str[i]<=64||str[i]>=91&&str[i]<=96||str[i]>=123&&str[i]<=127)
{
spl++;
}
}
printf("%d",spl);
}
