/*Write a C program to print all natural numbers in reverse(from n to 1)*/
#include<stdio.h>
int main()
{
    int n, i=n;
    printf("enter the number=", n);
    scanf("%d", &n);
    for(i=n;i>=1;i=i-1)
    {
        printf("%d \n", i);
    }
    return 0;
}

