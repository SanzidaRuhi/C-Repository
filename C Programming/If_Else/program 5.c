#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d", &a);
    if(a>80)
    {
        printf("the grade is A+");
    }
    else if (a>70)
    {
        printf("the grade is A");
    }
    else if (a>60)
    {
        printf("the grade is B");
    }
    else if (a>50)
    {
        printf("the grade is C");
    }
    else if (a>40)
    {
        printf("the grade is D");
    }
    else if (a<40)
    {
        printf("the grade is F");
    }
    return 0;
}
