/* C Program to swap two numbers using pointers and function. */
#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int num1=5,num2=10;
    swap(&num1,&num2); /* address of num1 and num2 is passed to swap function */
    printf("Number1 = %d\n",num1);
    printf("Number2 = %d",num2);
    return 0;
}
void swap(int *a,int *b)
{ /* pointer a and b points to address of num1 and num2
respectively */
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
