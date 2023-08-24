/*write a C program to print all natural numbers between 1 to n*/
#include<stdio.h>
int main()
{
    int i=1, n;
    printf("enter the number=");
    scanf("%d", &n);
    while(i<=n)
    {
        printf("%d \n", i);
        i=i+1;
    }
    return 0;
}
