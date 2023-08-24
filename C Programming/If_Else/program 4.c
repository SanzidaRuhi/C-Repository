#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    if(a<0)
    {
        printf("the number is negative");
    }
    else if (a>0)
    {
        printf("the number is positive");
    }
    else
    {
        printf("the number=0");
    }
    return 0;
}
