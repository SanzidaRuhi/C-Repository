//power using recursion
#include<stdio.h>
int power(int x, int n)
{
    if(n>1)
    {
        return (x*power(x, n-1));
    }
    else
    {
        return x;
    }
}
int main()
{
    int x, n;
    printf("enter value for base:");
    scanf("%d",&x);
    printf("enter value for power:");
    scanf("%d",&n);
    printf("%d power of %d is %d",n,x,power(x,n));
    return 0;
}
