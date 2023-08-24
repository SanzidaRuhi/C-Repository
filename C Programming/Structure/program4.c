#include<stdio.h>
void avg(int x, int y, int *p);
int main()
{
    int a, b, c;
    printf("enter 1st student's mark: ");
    scanf("%d",&a);
    printf("enter 2nd student's mark: ");
    scanf("%d",&b);
    avg(a, b, &c);
    printf("average value is: %d",c);
    return 0;
}
void avg(int x, int y, int *p)
{
    *p=(x+y)/2;
}
