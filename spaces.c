#include<stdio.h>
#include<string.h>
int main()
{
int i,spaces=0;
char str[25];
printf("enter the line:");
gets(str);
for(i=0;i<strlen(str);i++)
{
if(str[i]==' ')
{
spaces++;
}
}
printf("%d\n",spaces);
return 0;
}
