#include<stdio.h>
int main()
{
    int i=2, n, sum=0;
    printf("enter the number=");
    scanf("%d", &n);
    do
    {
        sum=sum+i;
        i=i+2;
        printf("sum of first n natural numbers=%d \n",sum);
    }while(i<=n);
    return 0;
}

