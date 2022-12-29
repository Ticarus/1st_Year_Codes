#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height,width,perimeter;
    printf("Input the height: ");
    scanf("%d",&height);
    printf("Input the width: ");
    scanf("%d",&width);
    perimeter = (2 * width) + (2 * height);
    printf("The perimeter of rectangle with height %d and width %d is %d",height,width,perimeter);
    return 0;
}
