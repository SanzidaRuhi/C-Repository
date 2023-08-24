#include<stdio.h>
int main()
{
    int char1;
    printf("Enter the character=");
    scanf("%c", &char1);
    if (char1>='A' && char1<='Z' || char1>='a' && char1<='z')
    {
        printf("The character is alphabet");
    }
    else if (char1>='0' && char1<='9')
    {
        printf("The character is digit");
    }
    else
    {
        printf("The character is special charcter");
    }
    return 0;
}
