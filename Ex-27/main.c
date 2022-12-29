#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Arrays are pointer constants you can't write them on the left side of an equals sign (except when defining them)

    int vals[5] = {10, 20, 30, 40, 50};

    printf("The first array value is %d.\n",*vals);
    printf("The first array value is %d.\n",*(vals + 0));
    printf("The second array value is %d.\n",*(vals + 1));
    printf("The third array value is %d.\n",*(vals + 2));
    printf("The fourth array value is %d.\n",*(vals + 3));
    printf("The fifth array value is %d.\n",*(vals + 4));

    return 0;
}
