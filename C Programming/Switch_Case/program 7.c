#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    switch(num%2==0)
    {
    case 1:
        printf("the number is even");
        break;
    case 0:
        printf("the number is odd");
    }
    return 0;
}
