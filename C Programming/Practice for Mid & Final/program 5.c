/*Write a C program to input electricity unit charges and calculate total electricity bill
according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>

int main()
{
    int eu;
    float eb, surcharge, total_eb;
    printf("electricity unit: ");
    scanf("%d",&eu);
    if(eu<=50)
    {
        //eb=(eu*0.50);
        printf("electricity bill is %f\n",eb=(eu*0.50));
    }
    else if(eu<=150)
    {
        //eb=(25+((eu-50)*0.75));
        printf("electricity bill is %f\n",eb=(25+((eu-50)*0.75)));
    }
    else if(eu<=250)
    {
        //eb=(100+((eu-150)*1.20));
        printf("electricity bill is %f\n",eb=(100+((eu-150)*1.20)));
    }
    else
    {
        //eb=(150+((eu-250)*1.50));
        printf("electricity bill is %f\n",eb=(150+((eu-250)*1.50)));
    }
    surcharge=(eb*0.20);
    total_eb=eb+surcharge;
    printf("total electricity bill is %f",total_eb);
    return 0;
}
