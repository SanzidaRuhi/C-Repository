#include<stdio.h>
int main()
{
    int var1, var2;
    printf("Enter the numbers=");
    scanf("%d %d", &var1, &var2);
    if (var1==var2)
    {
        printf("\n var1 is equal to var2", var1==12);
    }
    else
    {
        printf("\n var1 is not equal to var2", var2==21);
    }
    if (var2>var1)
    {
        printf("\n var2 is greater than var1");
    }
    else
    {
        printf("\n var2 is not greater than var1");
    }
    return 0;
}
