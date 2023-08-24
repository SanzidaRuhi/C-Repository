#include<stdio.h>
int convert();
int main()
{
    convert();
    return 0;
}
int convert()
{
    int dollars;
    int pounds;
    printf("enter dollars: ");
    scanf("%d",&dollars);

    printf("conversion to pounds=%d",dollars/2);
    return dollars/2;
}
