#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    switch(num>0)
    {
    case 1:
        printf("the number is positive");
        break;
    case 0:
        switch(num<0)
        {
     case 1:
        printf("the number is negative");
        break;
     case 0:
        printf("the number is zero");
        break;
        }
    }
    return 0;
}
