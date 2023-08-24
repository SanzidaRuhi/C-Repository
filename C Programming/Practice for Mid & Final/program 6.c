/*Write a program in C to read any digit, display in the word.*/
#include<stdio.h>
int main()
{
    int digit;
    printf("input digit: ");
    scanf("%d",&digit);
    if(digit==0)
    {
        printf("zero\n",digit);
    }
    else if(digit==1)
    {
        printf("one\n",digit);
    }
    else if(digit==2)
    {
        printf("two\n",digit);
    }
    else if(digit==3)
    {
        printf("three\n",digit);
    }
    else if(digit==4)
    {
        printf("four\n",digit);
    }
    else if(digit==5)
    {
        printf("five\n",digit);
    }
    else if (digit==6)
    {
        printf("six\n",digit);
    }
    else if(digit==7)
    {
        printf("seven\n",digit);
    }
    else if(digit==8)
    {
        printf("eight\n",digit);
    }
    else if(digit==9)
    {
        printf("nine\n",digit);
    }
    else
    {
        printf("can't read the digit",digit);
    }
    return 0;
}
