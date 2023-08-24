#include<stdio.h>
long int multiplyNumbers(int x);
int checkForPrime(int x);
int i;
int main() {
    int x, primeNo;
    printf("Enter a positive integer: ");
    scanf("%d",&x);
    i=x/2;
    primeNo = checkForPrime(x);
    if(primeNo==1)
        printf(" The number %d is a prime number. \n\n",x);
   else
      printf(" The number %d is not a prime number. \n\n",x);
      printf("The Factorial of %d is: %ld", x, multiplyNumbers(x));
   return 0;
}

int checkForPrime(int x)
{
    if(i==1)
    {
        return 1;
    }
    else if(x %i==0)
    {
         return 0;
    }
    else
       {
         i = i -1;
         checkForPrime(x);
      }
}

long int multiplyNumbers(int x) {
    if (x>=1)
        return x*multiplyNumbers(x-1);
    else
        return 1;
}
