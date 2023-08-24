
#include<stdio.h>
int main()
{
    int i=1, n, sum=0;
    printf("enter the number=");
    scanf("%d", &n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
        printf("sum of first n natural numbers=%d \n",sum);
    }
    return 0;
}

