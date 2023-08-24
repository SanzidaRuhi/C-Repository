#include<stdio.h>
int main()
{
    int a,n,d=4,tn,i;
    int sum=0;
    printf("enter the first number of A.P. series:");
    scanf("%d", &a);
    printf("enter the total numbers in A.P. series:");
    scanf("%d",&n);
    //printf("enter the common difference:4",d);
    //scanf("%d",&d);
    sum=(n*(2*a+(n-1)*d))/2;
    tn=a+(n-1)*d;
    printf("\n The sum series of A.P.:");
    for(i=a;i<=tn;i=i+d)
    {
        if(i!=tn)
            printf("%d+",i);
        else
            printf("%d=%d",i,sum);
    }
    printf("\n");
    return 0;
}
