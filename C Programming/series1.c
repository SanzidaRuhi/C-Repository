//1+2+3+4+....
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i=i+1)
    {
        sum=sum+i;
    }
    printf("sum of the series is: %d",sum);
    return 0;
}
