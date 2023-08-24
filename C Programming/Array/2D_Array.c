#include<stdio.h>
int main()
{
    int array[2][3];
    int sum=0;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("enter %d row %d column: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("the 2D array is: \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",array[i][j]);
            sum=sum+array[i][j];
        }
        printf("\n");
    }
    printf("\ntotal sum of the array is: %d",sum);
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(array[i][j]%2==0)
            {
                printf("\nthe power of %d is: %d",array[i][j],(array[i][j]*array[i][j]));
            }
        }
    }
    return 0;
}
