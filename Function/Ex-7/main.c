#include <stdio.h>
#include <stdlib.h>

long toBin(int);

int main()
{
    long bno;
    int dno;
    printf("Function:Turn decimal to binary\n");
    printf("--------------------------------\n");
    printf("Input the decimal value:");
    scanf("%d",&dno);
    bno = toBin(dno);
    printf("\nThe binary value is:%ld",bno);
    return 0;
}

long toBin(int dno)
{
    long bno=0,remainder,f=1;
    while(dno != 0)
    {
        remainder = dno % 2;
        bno = bno + remainder * f;
        f *= 10;
        dno = dno / 2;
    }
    return bno;
}
