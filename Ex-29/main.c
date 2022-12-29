#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This program declares and initializes an array of character pointers and then asks for ratings associated

int main()
{
    int i;
    int ctr = 0;
    char ans;

    // Declaring our array of 9 characters and then initializing them

    char * movies[9] = {"Amour", "Argo", "Beast of the Southern Wild", "Django Unchained", "Les Miserables", "Life of Pi", "Lincoln", "Silver Linings Playbook", "Zero Dark Thirty"};

    int movieratings[9];  // A corresponding array of 9 integers for movie ratings

    char * tempmovie = "This will be used to sort rated movies";

    int outer, inner, didSwap, temprating;  // for the loop sort

    printf("\n\n*** Oscar Season 2012 is here! *** \n\n");
    printf("Time to rate this year's best picture nominees:");

    for(i = 0 ; i < 9 ; i++)
    {
        printf("\nDid you see %s? (Y/N): ", movies[i]);
        scanf(" %c",&ans);

        if((toupper(ans)) == 'Y')
        {
            printf("\nWhat was your rating on a scale of 0-10: ");
            scanf(" %d",&movieratings[i]);

            ctr++;  // This will be used to print only movies you've seen

            continue;
        }
        else
        {
            movieratings[i] = -1;
        }
    }

    // Now sort the movies by rating (the unseen will go to the bottom)

    for(outer = 0 ; outer < 8 ; outer++)
    {
        for(inner = outer ; inner < 9 ; inner++)
        {
            if(movieratings[inner] > movieratings[outer])
            {
                tempmovie = movies[inner];
                temprating = movieratings[inner];
                movies[inner] = movies[outer];
                movieratings[inner] = movieratings[outer];
                movies[outer] = tempmovie;
                movieratings[outer] = temprating;
                didSwap = 1;
            }
        }
        if(didSwap == 0)
        {
            break;
        }
    }

    // Now to print the movies you saw in order

    printf("\n\n** Your Movie Ratings for the 2012 Oscar Contenders **\n");

    for(i = 0 ; i < ctr ; i++)
    {
        printf("%s rated %d!\n",movies[i], movieratings[i]);
    }

    return 0;
}
