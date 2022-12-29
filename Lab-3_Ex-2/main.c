#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price,age,room;

    printf("Enter price: ");

    scanf("%d",&price);

    printf("Enter age: ");

    scanf("%d",&age);

    printf("Enter room: ");

    scanf("%d",&room);

    if (price <= 400000)
    {
       printf("Criteria satisfied");
    }
    else
    {
        if (age <= 10)
        {

        }
        else
        {
            if (room >= 3)
            {
                printf("Criteria satisfied");
            }
            else
            {
                printf("Criteria not satisfied");
            }
        }
    }
    return 0;
}
