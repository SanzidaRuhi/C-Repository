//1^2+2^2+3^2+...
#include<stdio.h>
#include<math.h>
int main()
{
    int n, sum=0;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i=i+1)
    {
        sum=sum+pow(i,2);
    }
    printf("sum of the series is: %d",sum);
    return 0;
}
