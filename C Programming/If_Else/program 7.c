#include<stdio.h>
int main()
{
    int char1;
    printf("Enter the character=");
    scanf("%d", &char1);
    if (char1=='a'||char1=='e'||char1=='i'||char1=='o'||char1=='u'||char1=='A'||char1=='E'||char1=='I'||char1=='O'||char1=='U')
    {
        printf("char1 is vowel");
    }
    else
    {
        printf("char1 is consonant");
    }
    return 0;
}
