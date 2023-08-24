/*Write a C program to print all natural numbers between 1 to n*/
#include<stdio.h>
int main()
{
    int i=1, n;
    printf("enter the number=", n);
    scanf("%d", &n);
    do
    {
        printf("%d \n", i);
        i=i+1;
    }
    while(i<=n);
    return 0;
}
