#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gameScores[10] = {12, 5, 21, 15, 32, 10};
    int totalPoints = 0;
    float avg;

    for(int i = 6 ; i < 10 ; i++)
    {
        printf("What did the player score in game %d?  ", i+1);
        scanf("%d", &gameScores[i]);
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        totalPoints += gameScores[i];
    }

    avg = (float)totalPoints / 10;

    printf("\n\nThe player's scoring average is %.1f.", avg);

    return 0;
}
