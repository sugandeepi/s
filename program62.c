#include<stdio.h>
int main()
{
   char s[50];
   int i;
   printf("enter the string:");
   scanf("%s",&s);
   for(i=0;s[i]!='\0';i++)
   {
   if(s[i]>='0'&&s[i]<='1')
   {
       printf("yes");
       break;
   }
   else
   {
       printf("no");
       break;
   }
   }
   return 0;
}
