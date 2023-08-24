#include<stdio.h>
int main()
{
    int array[]={4,5,7,2,3};
    int n=5, x=7, position;
    printf("array before deletion: ");
    for(int i=0;i<n;i++)//printing array before deletion
    {
        printf("%d ",array[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(array[i]==x)//finding the value's position
        {
            position=i;
            printf("\nthe value is in position %d",i+1);
        }
    }
    for(int i=position;i<n;i++)//process of deletion
    {
        array[i]=array[i+1];
    }
    printf("\narray after deletion: ");
    for(int i=0;i<n-1;i++)//printing array after deletion
    {
        printf("%d ",array[i]);
    }
    return 0;
}
