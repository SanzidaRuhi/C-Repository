#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number=");
    scanf("%d", &a);
    if (a>100 && a%2==0)
    {
        printf("The number is even", a);
    }
    else if (a<100)
    {
        printf("The number is out of range", a);
    }
    else
    {
        printf("The number is odd", a);
    }
    return 0;
}
