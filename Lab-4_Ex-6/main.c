#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Enter the number: ");
    scanf("%d",&i);
    while(i>=0)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}
