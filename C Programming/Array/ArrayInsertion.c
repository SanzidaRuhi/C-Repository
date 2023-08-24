#include<stdio.h>
int main()
{

    int array[]={4,5,7,2,3};
    int n=5, x=1, position=3;
    printf("array before insertion: ");
    for(int i=0;i<n;i++)//printing array before insertion
    {
        printf("%d ",array[i]);
    }
    for(int i=n-1;i>=position;i--)//process of insertion
    {
        array[i+1]=array[i];
        if(i==position)
        {
            array[i]=x;
        }
    }
    printf("\narray after insertion: ");
    for(int i=0;i<=n;i++)//printing array after insertion
    {
        printf("%d ",array[i]);
    }
    return 0;
}
