#include<stdio.h>
int main()
{
    int number1;
    printf("Enter the first number=");
    scanf("%d",&number1);
    int number2;
    printf("Enter the second number=");
    scanf("%d",&number2);
    int number3;
    printf("Enter the third number=");
    scanf("%d",&number3);
    int number4;
    printf("Enter the fourth number=");
    scanf("%d",&number4);
    int number5;
    printf("Enter the fifth number=");
    scanf("%d",&number5);
    int total;
    total=number1+number2+number3+number4+number5;
    printf("The total:%d\n");
    int average;
    average=total/5;
    printf("The average:%d\n");
    int percentage;
    percentage=(total*500)/100;
    printf("The percentage:%d\n");
    return 0;
}
