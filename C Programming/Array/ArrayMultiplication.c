#include<stdio.h>
int main()
{
    int A[2][3], B[3][2], mul[2][2];
    int r1=2, c1=3, r2=3, c2=2, sum=0;
    printf("enter elements for array A\n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("enter %d row %d column: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nthe 2D array A is: \n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("enter elements for array B\n");
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("enter %d row %d column: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\nthe 2D array B is: \n");
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            for(int k=0; k<c1; k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
    printf("\nthe multiplication of the 2 array is: \n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
