#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,l,w,h,b,r;
    float area;
    printf("Input 1 for circle\n");
    printf("Input 2 for rectangle\n");
    printf("Input 3 for triangle\n");
    printf("Input your choice:");
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("Input circle's radius:");
        scanf("%d",&r);
        area = 3.14*(r*r);
    }
    else if(choice == 2)
    {
        printf("Input rectangle's length and width:");
        scanf("%d%d",&l,&w);
        area = l*w;
    }
    else if(choice == 3)
    {
        printf("Input triangle's base and height:");
        scanf("%d%d",&b,&h);
        area = (1.0/2.0)*b*h;
    }
    else
    {
        printf("Invalid input\nTry again");
    }
    printf("Area:%.2f",area);
    return 0;
}
