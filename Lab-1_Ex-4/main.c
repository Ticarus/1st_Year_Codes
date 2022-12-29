#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius,pi,area,circumference;
    radius=10;
    pi=3.14;
    area=pi*(radius*radius);
    circumference=2*pi*radius;
    printf("Area of this circle is %.1f and circumference of this circle is %.1f",area,circumference);
    return 0;
}
