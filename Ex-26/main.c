#include <stdio.h>
#include <stdlib.h>

/* this program demonstrates pointers by declaring and initializing
both regular and pointer variables for int, float, and char types
and then displays the value of each. */

int main()
{
    int kids;
    int * pKids;

    float price;
    float *pPrice;

    char code;
    char * pCode;

    price = 17.50;
    pPrice = &price;

    printf("\nHow many kids are you talking to the water park? ");
    scanf("%d",&kids);

    pKids = &kids;

    printf("\nDo you have a discount ticket for the park?");
    printf("\nEnter E for Employee Discount, S for Sav-More Discount, or N for No Discount: ");
    scanf(" %c",&code);

    pCode = &code;

    printf("\n\n\nFirst let's do it with variables:\n");
    printf("You've got %d kids...\n",kids);
    switch(code)
    {
        case('E'):
        {
            printf("The employee discount saves you 25%% on the $%.2f price ",price);
            printf("\nTotal ticket cost: $%.2f",(price * .75 * kids));
            break;
        }
        case('S'):
        {
            printf("The Sav-More discount saves you 15%% on the $%.2f price",price);
            printf("\nTotal ticket cost: $%.2f",(price * .85 * kids));
            break;
        }
        default:  // Either entered N for No Discount or an invalid letter
        {
            printf("You will be paying full price $%.2f for your tickets",price);
        }
    }

    // Now repeat the same, but use dereferenced pointers and get the same results

    printf("\n\n\n\nNow let's do it with pointers:\n");
    printf("You've got %d kids...\n", *pKids);

    switch(*pCode)
    {
        case('E'):
        {
            printf("The employee discount saves you 25%% on the $%.2f price ",*pPrice);
            printf("\nTotal ticket cost: $%.2f",(*pPrice * .75 * *pKids));
            break;
        }
        case('S'):
        {
            printf("The Sav-More discount saves you15%% on the $%.2f price",*pPrice);
            printf("\nTotal ticket cost: $%.2f",(*pPrice * .85 * *pKids));
            break;
        }
        default:
        {
            printf("You will be paying full price of $%.2f for your tickets",*pPrice);
        }
    }
    return 0;
}
