/*Write a C program to check whether a year is leap year or not.*/
#include<stdio.h>
int main()
{
    int yr;
    printf("enter a year: ");
    scanf("%d",&yr);
    if(yr%400==0 || yr%4==0)
    {
        printf("%d is a leap year",yr);
    }
    /*else if (yr%100==0)
    {
        printf("%d is not a leap year",yr);
    }*/
    else
    {
        printf("%d is not a leap year",yr);
    }
    return 0;
}
