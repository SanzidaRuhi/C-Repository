#include<stdio.h>
int main()
{
    int array[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("enter %d row %d column: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("the 2D array is: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                printf("the value of %d diagonal is: %d\n",(j+1),array[i][j]);
            }
        }
    }
    return 0;
}
