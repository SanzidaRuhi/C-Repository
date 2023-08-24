#include<stdio.h>
int main()
{
    int num1, num2, lcm, gcd, denominator, numerator, remainder;
    printf("enter 1st number: ");
    scanf("%d",&num1);
    printf("enter 2nd number: ");
    scanf("%d",&num2);
    if(num1>num2)
    {
        numerator=num1;
        denominator=num2;
    }
    else
    {
        numerator=num2;
        denominator=num1;
    }
    while(denominator!=0)
    {
        remainder=numerator%denominator;
        numerator=denominator;
        denominator=remainder;
    }
    gcd=numerator;
    lcm=(num1*num2)/gcd;
    printf("the gcd of %d & %d is: %d\n",num1, num2, gcd);
    printf("the lcm of %d & %d is: %d\n",num1, num2, lcm);
    return 0;
}
