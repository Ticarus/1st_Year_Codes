#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Aircraft_1[10];  //Can hold a 9 character name
    char Aircraft_2[] = "Black Hawk";  //Holds 11 characters (Black Hawk + null zero(\0))
    char Aircraft_3[11] = "Flanker";    //Aircraft_3 has 7 characters, specifically defined
    char Aircraft_4[15];
    char Aircraft_5[30];

    Aircraft_1[0] = 'R';   //Aircraft_1 is being defined character by character
    Aircraft_1[1] = 'a';   //Not efficient but it works
    Aircraft_1[2] = 'i';
    Aircraft_1[3] = 'd';
    Aircraft_1[4] = 'e';
    Aircraft_1[5] = 'n';
    Aircraft_1[6] = '\0';  //Just don't forget to put the null zero(\0) otherwise C does not know when the string ends

    strcpy(Aircraft_4, "Blackbird");  //This part assign the "Blackbird" to Aircraft_4

    printf("Enter an Aircraft's name:");
    scanf("%s",&Aircraft_5);

    printf("First aircraft is %s\n",Aircraft_1);
    printf("Second aircraft is %s\n",Aircraft_2);
    printf("Third aircraft is %s\n",Aircraft_3);
    printf("Fourth aircraft is %s\n",Aircraft_4);
    printf("Fifth aircraft is %s\n",Aircraft_5);

    return 0;
}
