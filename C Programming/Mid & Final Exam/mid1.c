#include<stdio.h>
int main()
{
    int array[10], n, a, b, c, min, p;
    printf("enter value for n: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("enter value for array[%d]:",i);
        scanf("%d",&array[i]);
    }
    for(int i=0; i<n; i++)
    {

        printf("%d ",array[i]);
    }
    printf("\nenter 1 or 2: ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("\ninsert a value into an array");
        printf("\nenter position to insert:");
        scanf("%d",&b);
        printf("\nenter value to insert:");
        scanf("%d",&c);
        printf("\n");
        for(int i=n-1; i>=b; i--)
        {
            array[i+1]=array[i];
            if(i=b)
            {
                array[i]=c;
            }
        }
        printf("\nafter insertion the array is: ");
        for(int i=0; i<n+1; i++)
        {
            printf("%d ",array[i]);
        }
    case 2:
        for(int i=0; i<n; i++)
        {
            min=i;
            for(int j=i+1; j<n; j++)
        {
            if(array[j]<array[min])
            {
                min=j;
            }
        }
        p=array[i];
        array[i]=array[min];
        array[min]=p;
        }
        printf("\nthe sorted array is: ");
        for(int i=0; i<n; i++)
        {
            printf("%d ",array[i]);
        }
    default:
        printf("\nthe number is not a case");
    }
    return 0;
}
