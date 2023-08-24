/*Write a C program to print all alphabets between a to z*/
#include<stdio.h>
int main()
{
    int ch='a';
    do
    {
        printf("%c \n", ch);
        ch++;
    }while(ch<='z');
    return 0;
}

