#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[9] = {1,5,20,23,45,62,91,93,95};
    int sV;
    int entry = -1;
    printf("Please enter the number that you are looking for: ");
    scanf("%d",&sV);
    int i;

    while(1)
    {
        for(i=0;i<9;i++)
        {
            if(array[i]==sV)
            {
                entry=i;
            }
            if(entry==-1)
            {
                printf("\n%d does not exist in the array",sV);
            }
            else
            {
                printf("\n%d exists in array.Its in entry %d",sV,entry+1);
            }
            printf("\nPlease enter another number: ");
            scanf("%d",&sV);
            entry = -1;
        }
    }

    return 0;
}
