#include<stdio.h>
int main()
{
    int i=1, number;
    printf("enter the number=");
    scanf("%d", &number);
    do
    {
        printf("%d*%d=%d \n", number, i, number*i);
        i=i+1;
    }while(i<=10);
    return 0;
}
