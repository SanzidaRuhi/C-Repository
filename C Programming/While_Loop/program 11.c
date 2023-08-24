#include<stdio.h>
int main()
{
    int i=1, n, sum=0;
    printf("enter the number=");
    scanf("%d", &n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
        printf("sum of first n natural numbers=%d \n",sum);
    }
    return 0;
}

