#include<stdio.h>
int main()
{
    int array[]={4,5,7,2,3};
    int n=5, x=5, position=-1;
    for(int i=0;i<n;i++)
    {
        if(array[i]==x)//finding the value's position
        {
            position=i;
            printf("the value is in position %d",i+1);
        }

    }
    if(position==-1)
    {
        printf("the key is not in the array");
    }
    return 0;
}
