#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10],i,j;
    for(i=0;i<10;i++)
    {
        printf("Input an integer: ");
        scanf("%d",&numbers[i]);
    }
    for(j=0;j<10;j++)
    {
        printf("%d\n",numbers[j]);
    }
    return 0;
}
