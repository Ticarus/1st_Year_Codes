#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,i,j;
    printf("Input up to the table number starting from 1 to wished integer:");
    scanf("%d",&num1);
    for(i=1;i<=num1;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%dx%d=%d || ",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}
