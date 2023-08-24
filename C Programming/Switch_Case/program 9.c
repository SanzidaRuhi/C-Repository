#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    switch(num%6==0)
    {
    case 1:
        switch(num%12==0)
        {
        case 1:
            printf("the number is divisible by 6 and 12");
            break;
        case 0:
            printf("the number is divisible by 6 but not by 12");
            break;
        }
        break;
        case 0:
            printf("the number is not divisible by 6 and 12");
    }
    return 0;
}
