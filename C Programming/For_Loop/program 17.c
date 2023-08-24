#include<stdio.h>
int main()
{
    int i, j, space, row, k, t=0;
    printf("input number of rows=");
    scanf("%d", &row);
    space=row+4-1;
    for(i=1;i<=row;i++)
    {
        for(k=space;k>=1;--k)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        printf("%d ",t=t+3);
        printf("\n");
        space--;
    }
    return 0;
}
