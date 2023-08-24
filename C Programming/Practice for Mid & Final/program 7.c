/*Write a program in C to calculate and print the Electricity bill of a given
customer. The customer id., name and unit consumed by the user should be
taken from the keyboard and display the total amount to pay to the customer.
The charge are as follow:
Unit Charge/unit
upto 199 @1.20
200 and above but less than 400 @1.50
400 and above but less than 600 @1.80
600 and above @2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the
minimum bill should be of Rs. 100/-*/
#include<stdio.h>
int main()
{
    int c_id, unit, eb, total_amt;
    //char name;
    printf("enter the customer id: \n");
    scanf("%d",&c_id);
    char name;
    printf("enter name: \n");
    scanf("%s",&name);
    printf("enter the unit: \n");
    scanf("%d",&unit);
    if(unit<=199)
    {
        eb=(unit*1.20);
    }
    else if(unit<400)
    {
        eb=(238.8+((unit-199)*1.50));
    }
    else if(unit<600)
    {
        eb=(538.8+((unit-399)*1.80));
    }
    else
    {
        eb=(898.8+((unit-599)*2.00));
    }
    if(eb>400)
    {
        total_amt=eb+eb*0.15;
    }
    else if(eb<100)
    {
        total_amt=100;
    }
    printf("total amount to pay is %d",total_amt);
    return 0;
}
