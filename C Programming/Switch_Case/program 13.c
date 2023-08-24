#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the number,x:\n",x);
    scanf("%d", &x);
    printf("enter the number,y:\n" ,y);
    scanf("%d", &y);
    switch(x>y && x+y>0)
    {
    case 1:
        printf("hi");
        break;
    case 0:
        printf("bye");
        break;
    default:
        printf("Hello Bye");
    }
    return 0;
}
