#include<stdio.h>
int main()
{
    int a;
    printf("enter the number=");
    scanf("%d", &a);
    if(a%6==0 && a%12!=0)
    {
        printf("the number is divisible by 6 and not by 12");
    }
    else if(a%6==0 && a%12==0)
    {
        printf("the number is divisible by 6 and 12");
    }
    else
    {
        printf("the number is not divisible by 6 and 12");
    }
    return 0;
}
