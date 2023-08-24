/*Write a C program to read roll no, name and marks of three subjects and
calculate the total, percentage and division.*/
#include<stdio.h>
int main()
{
    int roll_no, number1, number2, number3, total_num, percentage, division;
    char name;
    printf("enter the roll number: ");
    scanf("%d",&roll_no);
    printf("enter the name: ");
    scanf("%s",&name);
    printf("Enter the number of first subject= ");
    scanf("%d",&number1);

    printf("Enter the number of second subject= ");
    scanf("%d",&number2);

    printf("Enter the number of third subject= ");
    scanf("%d",&number3);

    total_num=number1+number2+number3;
    printf("The total:%d\n",total_num);

    percentage=(total_num/3);
    printf("The percentage:%d\n",percentage);
    if(percentage>=80)
    {
        printf("result is first division");
    }
    else if(percentage>=60)
    {
        printf("result is second division");
    }
    else if(percentage>=40)
    {
        printf("result is third division");
    }
    else
    {
        printf("result is fail");
    }
    return 0;
}

