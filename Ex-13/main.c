#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,rows,spc;
    printf("Input row count:");
    scanf("%d",&rows);
    spc=rows+4-1;
    for(i=1;i<=rows;i++)
    {
        for(j=spc;j>=1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
        spc--;
    }
    return 0;
}
