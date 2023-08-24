#include<stdio.h>
int main()
{
    int mat[10][3], i, j;
    for(i=1; i<11; i++)
    {
        mat[i-1][0] = i;
        mat[i-1][1] = i*i;
        mat[i-1][2] = i*i*i;
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
