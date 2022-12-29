#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maths,phy,chm,total_mpc,total_mp;
    printf("Input your Maths mark: ");
    scanf("%d",&maths);
    printf("Input your Physics mark: ");
    scanf("%d",&phy);
    printf("Input your Chemistry mark: ");
    scanf("%d",&chm);
    total_mpc = maths + phy + chm;
    total_mp = maths + phy;
    if(maths >= 65 && phy >= 55 && chm >= 50)
    {
        if(total_mpc >= 190 || total_mp >= 140)
        {
            printf("The candidate is eligible for admission");
        }
        else
        {
            printf("The candidate is not eligible for admission");
        }
    }
    else
    {
        printf("The candidate is not eligible for admission");
    }
    return 0;
}
