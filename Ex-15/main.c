#include <stdio.h>
#include <stdlib.h>

int main()
{
    char check;
    printf("Input a character: ");

    scanf("%c",&check);
    if((check >= 'a' && check <= 'z') || (check >= 'A' && check <= 'Z'))
    {
        printf("This is an alphabet\n");
    }
    else if(check >= '0' && check <= '9')
    {
        printf("This is a digit\n");
    }
    else
    {
        printf("This is a special character\n");
    }
    return 0;
}
