#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi , radius , perimeter , area;

    pi = 3.14;

    printf("Enter the radius of circle --> ");

    scanf("%f",&radius);

    perimeter = 2 * pi * radius;

    area = pi * (radius * radius);

    printf("Perimeter of circle is %.1f\nArea of circle is %.1f",perimeter,area);

    return 0;
}
