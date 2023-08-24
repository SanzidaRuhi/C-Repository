#include<stdio.h>
int main()
{
    int char1;
    printf("Enter the character=");
    scanf("%c", &char1);
    if(char1>='A' && char1<='Z' || char1>='a' && char1<='z')
    {
      printf("The character is alphabet");
    }
    else
    {
      printf("The character is not alphabet");
    }
    return 0;
}
