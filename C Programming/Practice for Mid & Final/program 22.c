//Write a Program to Read n numbers and find their sum, product and average using loop.
#include<stdio.h>
int main()
{
    int n, i, sum=0, product=1, average;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        product=product*i;
        average=sum/i;
        printf("sum=%d\n",sum);
        printf("product=%d\n",product);
        printf("average=%d\n",average);
    }
    return 0;
}
