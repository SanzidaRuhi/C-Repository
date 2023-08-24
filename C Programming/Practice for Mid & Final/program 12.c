/*Write a C program to input month number and print number of days in that month*/
#include<stdio.h>
int main()
{
    int month_number, days;
    printf("enter month number: ");
    scanf("%d",&month_number);
    if(month_number==1)
    {
        printf("31 days\n");
    }
    else if(month_number==2)
    {
      printf("28 days\n");
    }
    else if(month_number==3)
    {
      printf("31 days\n");
    }
    else if(month_number==4)
    {
      printf("30 days\n");
    }
    else if(month_number==5)
    {
        printf("31 days\n");
    }
    else if(month_number==6)
    {
        printf("30 days\n");
    }
    else if(month_number==7)
    {
        printf("31 days\n");
    }
    else if(month_number==8)
    {
        printf("31 days\n");
    }
    else if(month_number==9)
    {
       printf("30 days\n");
    }
    else if(month_number==10)
    {
        printf("31 days");
    }
    else if(month_number==11)
    {
        printf("30 days\n");
    }
    else if(month_number==12)
    {
        printf("31 days\n");
    }
    else
    {
        printf("a year consists of only 12 months");
    }
    return 0;
}
