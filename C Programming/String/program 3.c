#include<stdio.h>
int main()
{
  char str1[50],str2[50];
  static int i=0;
  int j=0;
  printf("Enter First String : ");
  gets(str1);
  printf("\nEnter Second String : ");
  gets(str2);
  while(str1[i]!='\0')
  {
    i++;
  }
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("After Concatenated \n %s",str1);
  return 0;
}
