#include<stdio.h>
main()
{
    int n,j,sum;
    j=1,sum=0;
    printf("Enter Maximum Value(n):");
    scanf("%d",&n);
    while(j<=n)
    {
        sum=sum+j*j;
        ++j;
    }
    printf("Sum of squares of numbers from 1 to n is :%d ",sum);
}
