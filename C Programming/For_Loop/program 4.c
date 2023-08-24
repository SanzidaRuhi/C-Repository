#include<stdio.h>
int main()
{
    int i=1, number;
    printf("enter the number=");
    scanf("%d", &number);
    for(i=1; i<=10; i=i+1)
    {
        printf("\n %d*%d=%d", number, i, number*i);
    }
    return 0;
}
