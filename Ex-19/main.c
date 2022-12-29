#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Input the Grade:");
    scanf("%c",&grade);
    if(grade == 'A')
    {
        printf("Excellent");
    }
    else if(grade == 'B')
    {
        printf("Very Good");
    }
    else if(grade == 'C')
    {
        printf("Good");
    }
    else if(grade == 'D')
    {
        printf("Average");
    }
    else if(grade == 'F')
    {
        printf("Failed");
    }
    return 0;
}
