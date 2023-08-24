//Write a program that can print n term of Fibonacci series and calculate the sum of the series.
#include<stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm, sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        sum=sum+t1;
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        //sum=sum+t1;
    }
    //sum=sum+t1;
    printf("\nthe sum of the series is %d",sum);
    return 0;
}
