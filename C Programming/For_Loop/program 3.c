/*Write a C program to print numbers between 1 to 10*/
#include<stdio.h>
int main()
{
    int i=1, number=0;
    printf("enter the number=");
    scanf("%d", &number);
    for(i=1; i<=10; i=i+1)
    {
        printf("\n %d", number*i);
    }
    return 0;
}
