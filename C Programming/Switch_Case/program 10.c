#include<stdio.h>
int main()
{
 int var1, var2;
 printf("enter the variables:");
 scanf("%d %d", &var1, &var2);
 switch(var1==var2)
 {
 case 1:
    printf("var1 is equal to var2");
    break;
 case 0:
    printf("var1 is not equal to var2");
 }
 return 0;
}
