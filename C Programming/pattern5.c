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
            printf("%c ",col+64);//for printing A as ASCII value of A is 65
            //printf("%c ",col+96);//for printing a as ASCII value of a is 97
        }
        printf("\n");
    }
    return 0;
}
