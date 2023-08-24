/*Write a C program to input basic salary of an employee and calculate its Gross
salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
#include<stdio.h>

int main()
{
    int bs, hra, da, gs;

    printf("enter the basic salary: ");
    scanf("%d",&bs);



    if(bs<=10000)
    {
        hra==(bs*(20/100));
        printf("HRA=%d\n",hra);
        da==(bs*(80/100));
        printf("DA=%d\n",da);
    }
    else if(bs<20000)
    {
        hra==(bs*(25/100));
        printf("HRA=%d\n",hra);
        da==(bs*(90/100));
        printf("DA=%d\n",da);
    }
    else
    {
        hra==(bs*(30/100));
        printf("HRA=%d\n",hra);
        da==(bs*(95/100));
        printf("DA=%d\n",da);
    }


    gs=bs+hra+da;
    printf("the gross salary is %d",gs);
    return 0;
}
