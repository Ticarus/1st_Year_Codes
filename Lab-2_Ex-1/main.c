#include <stdio.h>
#include <stdlib.h>

int main()
{
    float side1,side2,area;
    printf("Enter the side1: ");
    scanf("%f",&side1);
    printf("Enter the side2: ");
    scanf("%f",&side2);
    area = side1*side2;
    printf("Area of rectangle with side lengths of %.f and %.f is %.f",side1,side2,area);
    return 0;
}
