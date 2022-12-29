#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159


int main()
{
    /*
      They each require an argument expressed in radians

     cos(x)  ==> Returns the cosine of angle x

     sin(x)  ==> Returns the sine of angle x

     tan(x)  ==> Returns the tangent of angle x

     acos(x) ==> Returns the arc cosine of angle x

     asin(x) ==> Returns the arc sine of angle x

     atan(x) ==> Returns the arc tangent of angle x

       If you want to supply an argument in degrees instead of radians use this formula
     radians = degrees * (3.14159 / 180.0)

     exp(x) ==> Returns e, base of natural logarithm, raised to a power specified by x(e^x)

     log(x) ==> Returns the natural logarithm of the argument x, mathematically written as ln(x), x must be positive

     log10(x) ==> Returns the Base10 logarithm of the argument x, mathematically written as log10(x), must be positive
    */

    printf("It's time to do math homework!\n");

    printf("Section 1: Square Roots\n");
    printf("The square root of 49.0 is %.1f\n",sqrt(49.0));
    printf("The square root of 149.0 is %.1f\n",sqrt(149.0));
    printf("The square root of .149 is %.1f\n",sqrt(.149));

    printf("\n\nSection 2: Powers\n");
    printf("4 raised to the power of 3 is %.1f\n",pow(4.0, 3.0));
    printf("7 raised to the 5th power is %.1f\n",pow(7.0, 5.0));
    printf("34 raised to the 1/2 power is %.1f\n",pow(34.0, .5));

    printf("\n\nSection 3: Trigonometry\n");
    printf("The cosine of a 60 degree angle is %.3f\n",cos(60 * (PI / 180.0)));
    printf("The sine of 90 degree angle is %.3f\n",sin(90 * (PI / 180.0)));
    printf("The tangent of a 75 degree angle is %.3f\n",tan(75 * (PI / 180.0)));
    printf("The arc cosine of a 45 degree angle is %.3f\n",acos(45 * (PI / 180.0)));
    printf("The arc sine of a 30 degree angle is %.3f\n",asin(30 * (PI / 180.0)));
    printf("The arc tangent of a 15 degree angle is %.3f\n",atan(15 * (PI / 180.0)));

    printf("\n\nSection 4: Log Functions\n");
    printf("e raised to 2 is %.3f\n",exp(2));
    printf("The natural log of 5 is %.3f\n",log(5));
    printf("The base 10 log of 5 is %.3f\n",log10(5));

    return 0;
}
