#include<stdio.h>
int main()
{
    int A[2][3], B[2][3], sum[2][3];
    printf("enter elements for array A\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("enter %d row %d column: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nthe 2D array A is: \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("enter elements for array B\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("enter %d row %d column: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\nthe 2D array B is: \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("\nthe sum of the 2 array is: \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
