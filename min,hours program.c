#include<stdio.h>
int main()
{
int r,min,hours;
scanf("%d",&r);
hours=r/60;
min=r%60;
printf("%d %d",hours,min);
}
