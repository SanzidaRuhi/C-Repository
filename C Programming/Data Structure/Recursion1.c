//factorial using recursion
#include<stdio.h>
int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);
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
    printf("factorial of %d is %d",n,factorial(n));
    return 0;
}
