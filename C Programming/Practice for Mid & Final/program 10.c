/*Write a C program to input angles of a triangle and check whether triangle is valid or
not*/
#include<stdio.h>
int main()
{
    int angle1, angle2, angle3, sum;

    printf("enter the first angle: ");
    scanf("%d",&angle1);
    printf("enter the second angle: ");
    scanf("%d",&angle2);
    printf("enter the third angle: ");
    scanf("%d",&angle3);
    sum=angle1+angle2+angle3;
    if(sum==180 && angle1&&angle2&&angle3>0)
    {
        printf("the triangle is valid");
    }
    else
    {
        printf("the triangle is not valid");
    }
    return 0;
}
