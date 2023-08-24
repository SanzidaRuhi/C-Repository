#include<stdio.h>
int main()
{
    int  num[]={0,4,6,2,7,5};
    int value, position=-1, i;
    printf("enter a value to search: ");
    scanf("%d",&value);
    for(i=0;i<6;i++)
    {
        if(value==num[i])
        {
            position=i+1;
            break;
        }
    }
    if(position==-1)
    {
        printf("value not found");
    }
    else
    {
        printf("value is in %d index",position);
    }
}
