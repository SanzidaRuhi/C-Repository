/*Write a C program to print the smallest number*/
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1<num2 && num1<num3)
    {
        printf("\n %d is the smallest number", num1, num2, num3);
    }
    else if (num2<num3 && num2<num1);
    {
        printf("\n%d is the smallest number", num1, num2, num3);
    }
    else
    {
        printf("%d is the smallest number", num1, num2, num3);
    }
    return 0;
}
