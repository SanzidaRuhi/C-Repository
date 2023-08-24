/*Write a C program to print the multiplication table of any number*/
#include<stdio.h>
int main()
{
    int i=1, number;
    printf("enter the number=");
    scanf("%d", &number);
    while(i<=10)
    {
        printf("%d*%d=%d \n", number, i, number*i);
        i=i+1;
    }
    return 0;
}
