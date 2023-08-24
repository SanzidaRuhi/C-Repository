#include<stdio.h>
int main()
{
    int n, row, col;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            //printf("%d ",col);
            //printf("%d ",row);
            //printf("# ");
            //printf("* ");
            //printf("%c ",col+64);
            //printf("%c ",col+96);
            /*if(col%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }*/
            if(row%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
