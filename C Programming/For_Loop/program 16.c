#include<stdio.h>
int main()
{
    int i=1, n, j, sum=0;
    printf("enter the number=");
    scanf("%d", &n);
    for(i=1;i<=n;i=i+1)
    {
        if(i%2!=0)
        {
            j=i*i*i*i*i;
            sum=sum+j;
            printf("i=%d, j=%d, sum=%d \n", i, j, sum);
        }
    }
    printf("the ultimate summation is %d", sum);
    return 0;
}
