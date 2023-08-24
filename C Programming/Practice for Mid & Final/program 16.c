//Write a C program to input any integer and check whether it is prime or not prime
#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a positive number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;

        }
    }

        if(count==0)
        {
            printf("the number is a prime number.\n");
        }
        else
        {
            printf("the number is not a prime number.\n");
        }
        return 0;

}
