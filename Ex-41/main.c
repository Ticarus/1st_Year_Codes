#include <stdio.h>
#include <stdlib.h>

// The program demonstrates passing a variable to a function by address.

int main()
{
    int i;

    printf("Please enter an integer... ");
    scanf("%d",&i);

    // Now call the half function, passing the address of i

    half(&i);

    // Shows that the function did alter i's value

    printf("In main(), i is now %d.\n",i);

    return 0;  // Ends the program
}

/************************************************************************************************************************************************************/

// Sometimes putting dividers like above is a nice break between your functions

half(int *i)  // Receives the address of i
{
   *i = *i / 2;

   printf("Your value halved is %d.\n",*i);

   return;  // Returns to main
}
