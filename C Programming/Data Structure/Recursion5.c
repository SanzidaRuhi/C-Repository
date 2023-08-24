//even odd using recursion
#include<stdio.h>
void evenodd(int sum, int n)
{
    if(sum<=n)
    {
        printf("%d\t",sum);
        evenodd(sum+2,n);
    }
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("\neven numbers are: \n\t");
    evenodd(2,n);
    printf("\n");
    printf("\nodd numbers are: \n\t");
    evenodd(1,n);
    return 0;
}
