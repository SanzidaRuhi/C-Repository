#include<stdio.h>
#include<math.h>
int main()
{
    int x, n, temp1, temp2, sum=0, digit, count=0;
    printf("enter a number: ");
    scanf("%d",&x);
    temp1=x;
    while(temp1!=0)
    {
        temp1=temp1/10;
        count=count+1;
    }
    n=count;
    temp2=x;
    while (temp2>0)
    {
        digit=temp2%10;
        sum=sum+round(pow(digit,n));
        temp2=temp2/10;
    }
    if(x==sum)
    {
        printf("the number is an armstrong number");
    }
    else
    {
        printf("the number is not an armstrong number");
    }
    return 0;
}
