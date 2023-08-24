#include<stdio.h>
int main()
{
    int num, rev_num=0, temp, remainder;
    printf("enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        remainder=temp%10;
        rev_num=rev_num*10+remainder;
        temp=temp/10;
    }
    if(num==rev_num)
    {
        printf("the number is a palindrome number");
    }
    else
    {
        printf("the number is not a palindrome number");
    }
    return 0;
}
