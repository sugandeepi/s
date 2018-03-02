#include<stdio.h>
#include<string.h>
int main()
{
int i,word=1;
char str[50];
printf("enter the string\n");
gets(str);
for(i=1;i<strlen(str);i++)
{
if(str[i]==' ');
{
word++;
}
}
printf("%d\n",word);
return 0;
}
