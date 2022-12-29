#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10],i,j,k;
    printf("Enter 10 integers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&numbers[i]);
    }
     int evN=0;
     for(j=0;j<10;j++)
     {
         if(numbers[j]%2==0)
         {
             evN += 1;
         }
     }
     int odN=0;
     for(k=0;k<10;k++)
     {
         if(numbers[k]%2==1)
         {
             odN += 1;
         }
     }
     printf("Count of even numbers: %d\n",evN);
     printf("Count of odd numbers: %d\n",odN);

 return 0;
 }


