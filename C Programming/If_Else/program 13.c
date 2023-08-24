#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the angles=");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b+c==180)
    {
        printf("\n The triangle is valid",a,b,c);
    }
    else
    {
        printf("\n The triangle is not valid",a,b,c);
    }
    return 0;
}
