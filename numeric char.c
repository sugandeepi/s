#include<stdio.h>
#include<string.h>
int main()
{
int i,digit=0;
char str[100];
printf("enter the string:");
gets(str)
for(i=0;i<strlen(str);i++)
{
if(str[i]>='0'&&str[i]<'9')
{
digit++;
}
}
printf("%d",digit);
}
