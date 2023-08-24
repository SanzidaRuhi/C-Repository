//Write a program to find factorial of a number.
#include<stdio.h>
int main()
{
    int n, i=1,  factorial=1;
    printf("enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;

        printf("factorial of the number is %d\n",factorial);
    }
    return 0;
}
