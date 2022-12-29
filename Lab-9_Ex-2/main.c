#include <stdio.h>
#include <stdlib.h>
void printPattern(int r);

int main()
{
    int r;
    printf("Enter how many rows do you want to print: ");
    scanf("%d",&r);
    printPattern(r);
    return 0;
}

void printPattern(int r)
{
    int space = r - 1;
    int star = 1;
    int i,k,j;
    for(i=1;i<=r;i++)
    {
        for(k=1;k<=space;k++)
        {
            printf(" ");

        }
        for(j=1;j<=star;j++)
        {
            printf("X");
        }
        printf("\n");
        space = space - 1;
        star = star + 2;
    }
}
