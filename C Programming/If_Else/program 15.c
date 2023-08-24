#include<stdio.h>
int main()
{
    int unit;
    float electricity_bill, subcharge, total_electricity_bill, net_electricity_bill;
    printf("enter the unit = ");
    scanf("%d", &unit);
    if(unit>0 && unit<=50)
    {
        electricity_bill=unit*0.5;
    }
    else if(unit>50&&unit<=150)
    {
        electricity_bill=unit*0.75;
    }
    else if(unit>150&&unit<=250)
    {
        electricity_bill=unit*1.20;
    }
    else if(unit>250)
    {
        printf("electricity_bill is %f", unit*1.50+(unit*1.50*.2));
    }
    subcharge=electricity_bill*0.2;
    total_electricity_bill=electricity_bill+subcharge;
    printf("\n net_electricity_bill is %f", total_electricity_bill);
    return 0;
}
