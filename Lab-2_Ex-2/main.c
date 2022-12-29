#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius,area,circumference;
    float pi = 3.14;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    area = radius*radius*pi;
    circumference = 2*radius*pi;
    printf("Area of this circle is %.3f and its circumference is %.3f",area,circumference);
    return 0;
}
