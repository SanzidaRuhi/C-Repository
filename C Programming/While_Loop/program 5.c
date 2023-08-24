/*write a C program to print all natural numbers between 1 to n(in reverse)*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d", &n);
    int i=n;
    while(i>=1)
    {
        printf("%d \n", i);
        i=i-1;
    }
    return 0;
}
