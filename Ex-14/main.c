#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1 , y1 , x2 , y2 , distance , deltax, deltay;

    printf("Enter the x value of the first point--> ");

    scanf("%f",&x1);

    printf("Enter the y value of the first point--> ");

    scanf("%f",&y1);

    printf("Enter the x value of second point--> ");

    scanf("%f",&x2);

    printf("Enter the y value of second point--> ");

    scanf("%f",&y2);

    deltax = (x1 - x2);

    deltay = (y1 - y2);

    distance = (deltax * deltax) + (deltay * deltay);

    printf("Distance between the said points--> %.2f",sqrt(distance));

    return 0;
}
