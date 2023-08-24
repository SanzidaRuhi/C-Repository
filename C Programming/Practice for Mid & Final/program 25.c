//Write a Program to Find the Highest Common Factor (HCF) of two numbers.
#include<stdio.h>
int main()
{
    int a, b, t, hcf;
    printf("enter the numbers: ");
   scanf("%d %d",&a, &b);
    while (b != 0)
  {
    t = b;
    b = a % b;
    a = t;
  }

  hcf = a;
  printf("the highest common factor is %d",hcf);
  return 0;
}
