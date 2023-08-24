#include<stdio.h>
int main()
{
    int array[6]={1,3,6,8,11,15};
    int n, position=-1;
    printf("enter a value to search: ");
    scanf("%d",&n);
    int low=0, high=5, mid;
    mid=(high+low)/2;
    while(low<=high)
    {
        if(n<array[mid])
        {
            high=mid-1;
            mid=(high+low)/2;
        }
        else if(n>array[mid])
        {
            low=mid+1;
            mid=(high+low)/2;
        }
        else if(n=array[mid])
        {
            printf("the value is found at %d index",(mid+1));
            position=mid;
            break;
        }
    }
    if(position==-1)
    {
        printf("the value is not found");
    }
    return 0;
}
