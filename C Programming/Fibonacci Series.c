#include<stdio.h>
int main()
{
    int a,b,c, i, terms;
    printf("input number of terms to display:");
    scanf("%d",& terms);
    a=0;
    b=1;
    c=0;
    printf("here is the fibonacci series upto 10 terms:\n");
    for (i=1;i<=terms;i++)
    {
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
