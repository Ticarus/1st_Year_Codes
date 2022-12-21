#include <stdio.h>
#include <stdlib.h>

int main()
{
    int door;

    printf("You are in a room with no windows, with only a lantern on the floor.\nYou took the lantern and look around you.\nThere are three doors front of you which are labeled with numbers 1,2,3\nWhich door are you going to open?\n");

    scanf("%d",&door);

    if ( door == 1)
    {
        printf("You opened the door with the 1 labeled on it,a ghoul jumped on you.\nYou hit the ghoul with lantern but it wasn't enough to stop the ghoul.\nThe ghoul bite your neck and the broken lantern started a fire.\nYou died from bleeding in 3 minutes,after you the ghoul died burning alive.\nWell,you got your revenge from the ghoul but you died.\nAt least it was a lit revenge.\n\n\nGAME OVER ");
    }
    else
    {
        if ( door == 2)
        {
            printf("You opened the door with the 2 labeled on it,there is a long and pitch black corridor.\nYou walked about half an hour and come to a dead end,there is a wall but you feel an airflow.\nSoon you realize that the wall is too weak,you pushed the wall with your shoulder little bit,the wall moved slightly.\nYou pushed the wall again with all of your strength this time,suddenly the wall just break and you were blinded by the sunlight.\nYou managed to find your way out.\n\n\nCONGRATULATIONS YOU WIN!");
        }
        else
        {
            if ( door == 3)
            {
                printf("You opened the door with the 3 labeled on it,there is a long corridor with dim lighting.\nYou walked about five minutes.\nThat five minutes become 30 minutes.\nThen an hour past and yet you feel like you didn't make any progress.\nAnother hour past,you begin to get sleepy.\nYou were walking nonstop about 6 hours more or less,to be honest you can't tell how long you were walking.\nThe walls start to tighten you notice,this corridor is getting tighter and tighter by the way you are so exhausted that you can't feel like you can walk anymore without some rest.\nYou diceded to stop and rest a little bit as soon as you sit to floor you just fall asleep.\nTurns out you were walking in a some sort of a living corridor.\nAs soon as this corridor realized that you were asleep,corridor has just tighten around you and started digesting you.\nYou didn't felt anything because that corridor was releasing a tranquilizing gas to make sure you stay asleep all the time.\nYou died without any pain,digested by a living corridor without even knowing,feeling,realizing.\nThe question is if you could walk all the way till the other end of the corridor what would have you found?\nOr is there even another end of this corridor?\n\n\nGAME OVER  ");
            }
        }
    }

    return 0;
}
