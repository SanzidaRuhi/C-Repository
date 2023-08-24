#include<stdio.h>
int main()
{
    int i,n,j,sum=0;
    printf("enter the number=");
    scanf("%d", &n);
    for(i=1;i<=n;i=i+1)
    {
       j=i*i*i;
       sum=sum+(i*i*i);
       printf("i:%d, j:%d, sum:%d \n",i,j,sum);
    }
    printf("the ultimate sum is %d",sum);
    return 0;
}
