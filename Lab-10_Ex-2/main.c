#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10],i,j,k;
    for(i=0;i<10;i++)
    {
        printf("Enter integer %d: ",i);
        scanf("%d",&numbers[i]);
    }
    printf("Even numbers: ");
    for(j=0;j<10;j++)
    {
        if(numbers[j]%2==0)
        {
            printf(" %d",numbers[j]);
        }
    }
    printf("\nOdd numbers: ");
    for(k=0;k<10;k++)
    {
        if(numbers[k]%2==1)
        {
            printf(" %d",numbers[k]);
        }
    }
    return 0;
}
