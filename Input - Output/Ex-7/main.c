#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstname[20],lastname[20];
    int brtday;
    printf("Input your first name: ");
    scanf("%s",&firstname);
    printf("Input your last name: ");
    scanf("%s",&lastname);
    printf("Input your birthday: ");
    scanf("%d",&brtday);
    printf("%s %s %d",firstname,lastname,brtday);
    return 0;
}
