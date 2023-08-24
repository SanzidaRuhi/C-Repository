//sum using recursion
#include<stdio.h>
int sum(int n)
{
    if(n>1)
    {
        return n+sum(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    printf("enter value:");
    scanf("%d",&n);
    printf("sum of %d numbers is %d",n,sum(n));
    return 0;
}
