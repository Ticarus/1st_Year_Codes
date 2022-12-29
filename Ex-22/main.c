#include <stdio.h>
#include <stdlib.h>

int main()
{
    float side1,side2,side3;

    printf("Input the first side length--> ");

    scanf("%f",&side1);

    printf("Input the second side length--> ");

    scanf("%f",&side2);

    printf("Input the third side length--> ");

    scanf("%f",&side3);

    if(side1 < (side2 + side3) && side2 < (side1 + side3) && side3 < (side1 + side2))
    {
        float perimeter = side1 + side2 + side3;

        printf("Perimeter = %f",perimeter);
    }
    else
    {
         printf("Not possible to create a triangle");
    }

    return 0;
}
