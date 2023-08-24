#include<stdio.h>
int main()
{
    int array[]={2,6,3,9,4,0};
    int p;
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(array[j]>array[j+1])
            {
                p=array[j];
                array[j]=array[j+1];
                array[j+1]=p;
            }

        }
    }
    printf("the sorted array set is: ");
    for(int i=0; i<6; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
