//A program that computes the area of a rectangle:
#include <stdio.h>
void rectangle(int a, int b, int * area);
int main()
{
    int x, y;
    int area;
    printf("Enter two values separated by space: " );
    scanf("%d %d", &x, &y);
    rectangle(x, y, &area);
    printf("Area is %d\n", area);
    return 0;
}
void rectangle(int a,int b,int *area)
{
    *area = a * b;
}
