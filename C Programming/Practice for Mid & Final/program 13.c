/*Write a C program to check whether a character is uppercase or lowercase alphabet*/
#include<stdio.h>
int main()
{
    int alpha;
    printf("enter the alphabet: ");
    scanf("%c",&alpha);
    if(alpha>='a' && alpha<='z')
    {
        printf("the character is lowercase alphabet");
    }
    else if(alpha>='A' && alpha<='Z')
    {
        printf("the character is uppercase alphabet");
    }
    else
    {
        printf("the character is not a alphabet");
    }
    return 0;
}
