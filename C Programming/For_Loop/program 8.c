#include<stdio.h>
int main()
{
    int i=2, n;
    printf("enter the number=");
    scanf("%d", &n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d \n", i);
    }
    return 0;
}


