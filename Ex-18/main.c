#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q,r,s;

    printf("Input first integer--> ");

    scanf("%d",&p);

    printf("Input second integer--> ");

    scanf("%d",&q);

    printf("Input third integer--> ");

    scanf("%d",&r);

    printf("Input fourth integer--> ");

    scanf("%d",&s);

    if (q > r && s > p && (r + s) > (p + q))
    {
        printf("Correct values");
    }
    else
    {
        printf("Wrong values");
    }

    return 0;
}
