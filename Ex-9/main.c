#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Input x and y value: ");
    scanf("%d %d",&x,&y);
    if(x > 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the first quadrant",x,y);
    }
    else if(x < 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the second quadrant",x,y);
    }
    else if(x < 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the third quadrant",x,y);
    }
    else
    {
        printf("The coordinate point (%d,%d) lies in the fourth quadrant",x,y);
    }
    return 0;
}
