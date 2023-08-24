#include<stdio.h>
int main()
{
    int array[]={4,8,2,9,1,0,5};
    int length = sizeof(array)/sizeof(array[0]);
    printf("%d\n",length);
    int min, p;
    for(int i=0; i<length; i++)
    {
        min=i;
        for(int j=i+1; j<length; j++)
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
    printf("the sorted array set is: ");
    for(int i=0; i<length; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
