#include<stdio.h>
int main()
{
    int array[5];
    for(int i=0; i<5; i++)
    {
        printf("enter the %d value: ",i);
        scanf("%d",&array[i]);
    }
    int value=0;
    for(int i=0; i<5; i++)
    {
        if(value<=array[i])
        {
            value=array[i];
        }
    }
    printf("the greatest value in the array is: %d",value);
    return 0;
}
