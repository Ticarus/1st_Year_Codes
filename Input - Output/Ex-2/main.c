#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,V;
    printf("Input the sphere's radius: ");
    scanf("%f",&r);
    V = ((4.0 / 3.0) * ((3.14) * (r * r * r)));
    printf("The volume of the sphere is %.2f",V);
    return 0;
}
