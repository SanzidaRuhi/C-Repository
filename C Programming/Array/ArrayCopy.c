#include<stdio.h>
int main()
{
   int a[5]={2,4,5,7,3};
   int b[5];
   for(int i =0; i<5; i++)
   {
       b[i]=a[i];
   }
   printf("the elements of array b are: ");
   for(int i=0; i<5; i++)
   {
       printf("%d ",b[i]);
   }
   return 0;
}
