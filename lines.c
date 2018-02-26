#include<stdio.h>
#include<string.h>
int main()
{
int i,lines=0;
char str[25];
printf("enter the paragraph:");
gets(str);
for(i=0;i<strlen(str);i++)
{
if(str[i]=='.')
{
lines++;
}
}
printf("%d\n",lines);
return 0;
}
