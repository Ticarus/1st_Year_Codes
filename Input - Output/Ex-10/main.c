#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angle1,angle2,angle3,a1a2;
    printf("Enter the angles of triangle separated by comma: ");
    scanf("%d,%d",&angle1,&angle2);
    a1a2 = angle1 + angle2;
    if(a1a2<180 && a1a2>0)
    {
        angle3 = 180 - a1a2;
        printf("Third angle of the triangle: %d",angle3);
    }
    else
    {
        printf("ERROR");
    }

    return 0;
}
