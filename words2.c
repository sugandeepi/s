#include<stdio.h>
#include<string.h>
int main()
{
        int i,word=1;
        char str[50];
        printf("enter the string:");
        gets(str);
        for(i=0;i<=strlen(str);i++)
        {
                if(str[i]==' ')
                {
                        word++;
                }
        }
        printf("%d",word);
        return 0;
}
