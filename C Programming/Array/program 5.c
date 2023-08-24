#include<stdio.h>
int main()
{
     int first[10][10],second[10][10],result[10][10];
     int i,j,r1,r2,c1,c2,k,sum=0;
     printf("Enter rows for first matrix:");
     scanf("%d", &r1);
     printf("Enter columns for first matrix:");
     scanf("%d", &c1);
     printf("Enter rows for second matrix:");
     scanf("%d", &r2);
     printf("Enter columns for second matrix:");
     scanf("%d", &c2);
     while(c1!=r2)
     {
          printf("Error!! Column of matrix not equal to row of second\n:");
          printf("Enter rows for first matrix");
          scanf("%d",&r1);
          printf("Enter columns for first matrix:");
          scanf("%d", &c1);
          printf("Enter rows for second matrix");
          scanf("%d",&r2);
          printf("Enter columns for second matrix:");
          scanf("%d", &c2);
     }
          for (i=0;i<r1;i++)
          {
               for(j=0;j<c1;j++)
               {
                     printf("Enter r1[%d] c1[%d] :",i,j);
                    scanf("%d",&first[i][j]);
               }
          }
          printf("\n");
           for (i=0;i<r2;i++)
          {
               for(j=0;j<c2;j++)
               {
                     printf("Enter r2[%d]c2[%d] :",i,j);
                    scanf("%d",&second[i][j]);
               }
          }
          printf("\n");
          for (i=0;i<r1;i++)
          {
               for(j=0;j<c2;j++)
               {
                    for(k=0;k<c1;k++)
                    {
                         sum=sum+first[i][k]*second[k][j];
                    }
                    result[i][j]=sum;
                    sum=0;
               }
               printf("\n");
          }
          printf("first matrix:\n");
          for (i=0;i<r1;i++)
          {
               for(j=0;j<c1;j++)
               {
                    printf(" %d ",first[i][j]);
               }
               printf("\n");
          }
          printf("second matrix:\n");
          for (i=0;i<r2;i++)
          {
               for(j=0;j<c2;j++)
               {
                    printf(" %d ",second[i][j]);
               }
               printf("\n");
          }
           printf("\n\nresult matrix:\n ");
          for (i=0;i<r1;i++)
          {
               printf("\t");
               for(j=0;j<c2;j++)
               {
                    printf("%d ",result[i][j]);
               }
               printf("\n");
          }
          return 0;
}

