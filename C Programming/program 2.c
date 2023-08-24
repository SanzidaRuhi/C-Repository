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
    int sum;
    sum=number1+number2+number3+number4;
    printf("The sum:%d\n",sum);
    int sub;
    sub=number1-number2-number3-number4;
    printf("The sub:%d\n",sub);
    int multiply;
    multiply=number1*number2*number3*number4;
    printf("The multiply:%d\n",multiply);
    int division;
    division=number1/number2/number3/number4;
    printf("The division:%d",division);
    return 0;
}
