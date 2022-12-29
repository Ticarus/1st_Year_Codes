#include <stdio.h>
#include <stdlib.h>
void printPattern(int n);

int main()
{
    int num;
    printf("Input an integer: ");
    scanf("%d",&num);
    printPattern(num);
    return 0;
}

void printPattern(int n)
{
    int i,j;
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= i ; j++)
        {
            printf("X");
        }
        printf("\n");
    }
}
