#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    printf("Input your height: ");
    scanf("%d",&height);
    if(height < 140)
    {
        printf("You're a dwarf");
    }
    else if(height >= 140 && height <= 190)
    {
        printf("You're normal");
    }
    else
    {
        printf("You're beanstalk");
    }
    return 0;
}
