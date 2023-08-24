/*Write a c program to print all natural numbers between 1 to n ( in reverse)*/
#include<stdio.h>
int main()
{
    int n, i=n;
    printf("enter the number=", n);
    scanf("%d", &n);
    do
    {
        printf("%d \n", i);
        i=i-1;
    }
    while(i>=1);
    return 0;
}
