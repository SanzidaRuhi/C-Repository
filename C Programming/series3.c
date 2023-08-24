//1-2+3-4+5-6+...
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i=i+1)
    {
        if(i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
    }
    printf("sum of the series is: %d",sum);
    return 0;
}
