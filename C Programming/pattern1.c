#include<stdio.h>
int main()
{
    int n, row, col;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            //printf("%d ",col);
            //printf("2 ");
            //printf("* ");
            //printf("# ");
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
