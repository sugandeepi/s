#include<stdio.h>
int main()
{
int array[20],size,i,minimum;
printf("enter the size of an  array");
scanf("%d",&size);
printf("enter the number of elements in an array is %d");
for(i=0;i<size;i++)
scanf("%d",&array[i]);
minimum=array[i];
for(i=0;i<size;i++)
{
if(array[i]<mimimum)
{
minimum=array[i];
}
}
printf("the minimum element in an array is %d",minimum);
return 0;
}
