#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height , width , perimeter , area;
    height = 7;
    width = 5;

    perimeter = (2 * width) + (2 * height);

    area = width * height;

    printf("Perimeter of rectangle is %.1f\nArea of rectangle is %.1f",perimeter,area);


    return 0;
}
