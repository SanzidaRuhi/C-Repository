#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the number=");
    scanf("%d", &n);
    for(i=1;i<=n;i=i+1)
    {
        printf("the number is %d and cube of %d is %d \n", i, i, i*i*i);
        sum=sum+(i*i*i);
        printf("sum:%d \n", sum);
    }
    printf("the ultimate sum is %d",sum);
    return 0;
}
