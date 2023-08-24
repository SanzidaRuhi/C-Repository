//Write a C program to calculate profit or loss.

#include <stdio.h>

int main()
{
    int cp,sp, amount;

    /* Input cost price and selling price of a product */
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);

    if(sp>cp)
    {
        /* Calculate Profit */
        amount = sp-cp;
        printf("Profit = %d", amount);
    }
    else if(cp>sp)
    {
        /* Calculate Loss */
        amount = cp-sp;
        printf("Loss = %d", amount);
    }
    else
    {
        /* Neither profit nor loss */
        printf("No Profit No Loss.");
    }

    return 0;
}
