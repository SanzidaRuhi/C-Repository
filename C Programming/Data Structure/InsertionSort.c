#include<stdio.h>
int main()
{
    int array[]={2,6,3,8,5,0};
    printf("%d\n",sizeof(array));
    printf("%d\n",sizeof(array[0]));
    int a=0;
    int length = sizeof(array)/sizeof(array[0]);
    printf("%d\n",length);
    //Ascending order
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(array[i]>array[j])
            {
                a=array[i];
                array[i]=array[j];
                array[j]=a;
            }
        }
    }
    /*descending order
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(array[i]<array[j])
            {
                a=array[j];
                array[j]=array[i];
                array[i]=a;
            }
        }
    }*/
    printf("the sorted array set is: ");
    for(int i=0; i<6; i++)
    {
        printf("%d ",array[i]);
    }
    int n=7,p;
    for(int i=0; i<6; i++)
    {
        if(n<array[i])
        {
            p=array[i+1];
            array[i+1]=array[i];
            array[i]=n;
        }
    }
    printf("\nafter insertion sort the array set is: ");
    for(int i=0; i<7; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
