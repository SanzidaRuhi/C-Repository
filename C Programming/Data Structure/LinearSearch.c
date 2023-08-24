#include <stdio.h>
int main()
{
    int array[6], key, count=0;
    for(int i=0; i<6; i++)
    {
        printf("enter value for array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("enter value to search: ");
    scanf("%d",&key);
    for(int i=0; i<6; i++)
    {
        if(array[i]==key)
        {
            printf("the key is in the position array[%d]",i);
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("the key is not in the array");
    }
    return 0;
}
