/*Write a C program to input any alphabet and check whether it is vowel or consonant.*/
#include<stdio.h>
int main()
{
    int alpha;
    printf("enter the alphabet: ");
    scanf("%c",&alpha);
    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
    {
        printf("the alphabet is a vowel");
    }
    else if(alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
    {
        printf("the alphabet is a vowel");
    }
    else
    {
       printf("the alphabet is a consonant");
    }
    return 0;
}
