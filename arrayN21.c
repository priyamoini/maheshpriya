#include<stdio.h>
#define maximum 10
void main()
{
int array[maximum];
int i,j,num,team;
printf("enter the value of num\n");
scanf("%d",&num);
printf("enter the element one by one\n");
for(i=0;i<=num;i++)
{
scanf(%d",&array[i]);
}
printf("input array in \n");
for(i=0;i<=num;i++)
{
printf("%d\n",array[i]);
}
for(i=0;i<=num;i++)
{
for(j=0;j<=(num-i-1);j++)
{
if(arry[i]>array[j+1])
{
temp=array[j];
array[j]=array[j+1]);
array[j+1]=temp;
}
}
}
printf("sorted array is \n");
for(i=0;i<=num;j++)
{
printf("%d\n",array[i]);
}
}
