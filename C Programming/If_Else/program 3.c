#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("the number is even\n %d", a*10);
    }
    else
    {
        printf("the number is odd", a);
    }
    return 0;
}
