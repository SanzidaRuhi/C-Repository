/*Write a C program to print multiplication table of any number*/
#include<stdio.h>
int main()
{
    int i=1, n;
    printf("enter the number=", n);
    scanf("%d", &n);
    for(i=1;i<=n;i=i+1)
    {
        printf("%d \n", i);
    }
    return 0;
}

