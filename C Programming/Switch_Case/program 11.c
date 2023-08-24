#include<stdio.h>
int main()
{
    int char1;
    printf("Enter the character=");
    scanf("%c", &char1);
    switch (char1>='A' && char1<='Z' || char1>='a' && char1<='z')
    {
    case 1:
        printf("The character is alphabet");
        break;
    case 0:
        printf("The character is not alphabet");
    }
    return 0;
}
