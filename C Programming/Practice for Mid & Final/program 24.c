//Write a Program to Find Lowest Common Divisor (LCD) of three numbers.
#include<stdio.h>
int main()
{
   int a, b, c, t1, t2, gcd1, gcd2, lcm1, lcm2;
   printf("enter the numbers: ");
   scanf("%d %d %d",&a, &b, &c);
   while (b != 0)
  {
    t1 = b;
    b = a % b;
    a = t1;
  }

  gcd1 = a;
  lcm1=(a*b)/gcd1;
  while (lcm1 != 0)
  {
    t2 = lcm1;
    lcm1 = c % lcm1;
    c = t2;
  }
  gcd2 = c;
  lcm2=(c*lcm1)/gcd2;
  printf("the lowest common divisor is %d", lcm2);
  return 0;
}
