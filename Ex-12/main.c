#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer1 , integer2 , integer3;

    printf("Enter three integers--> \n");

    scanf("%d%d%d",&integer1,&integer2,&integer3);

    if (integer1 >= integer2 && integer1 >= integer3)
    {
        printf("%d is the maximum",integer1);
    }
    else if (integer2 >= integer1 && integer2 >= integer3)
    {
        printf("%d is the maximum",integer2);
    }
    else if (integer3 >= integer1 && integer3 >= integer1)
    {
        printf("%d is the maximum",integer3);
    }

    return 0;
}
