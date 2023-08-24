#include<stdio.h>
int show(int *var, int *hike)
{
    *var = *var+*hike;
}
int main()
{
    int s;
    int hike;
    printf("Enter the value:");
    scanf("%d", &s);
    printf("Enter hike amount:");
    scanf("%d", &hike);
    show (&s, &hike);
    printf("Final total: %d", s);
    return 0;
}
