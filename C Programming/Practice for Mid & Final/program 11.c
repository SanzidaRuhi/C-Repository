/*Write a C program to input all sides of a triangle and check whether triangle is valid
or not*/
#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("enter the value of first side: ");
    scanf("%d",&side1);
    printf("enter the value of second side: ");
    scanf("%d",&side2);
    printf("enter the value of third side: ");
    scanf("%d",&side3);
    if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2)
    {
          printf("the triangle is valid");
    }
    else
    {
        printf("the triangle is not valid");
    }
    return 0;
}
