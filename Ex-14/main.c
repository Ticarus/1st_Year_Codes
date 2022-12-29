#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ang1,ang2,ang3,total;
    printf("Input triangle's angles: ");
    scanf("%d%d%d",&ang1,&ang2,&ang3);
    total = ang1 + ang2 + ang3;
    if(total == 180)
    {
        if(ang1==ang2 && ang2==ang3)
        {
            printf("This is an equilateral triangle");
        }
        if(ang1==ang2 && ang2!=ang3)
        {
            printf("This is an isosceles triangle");
        }
        if(ang1!=ang2 && ang1!=ang3 && ang2!=ang3)
        {
            printf("This is a scalene triangle");
        }
    }
    else
    {
        printf("The triangle is not valid");
    }
    return 0;
}
