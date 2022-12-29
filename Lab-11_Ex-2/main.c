#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mid[10],fin[10],homework[10];
    float overall[10];
    char letter[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter the student%d's midterm,final and homework grades: ",i+1);
        scanf("%d %d %d",&mid[i],&fin[i],&homework[i]);
    }
    for(i=0;i<10;i++)
    {
        overall[i]=mid[i]*0.3+fin[i]*0.4+homework[i]*0.3;
        if(overall[i]>=60)
        {
            letter[i]='A';
        }
        else if(overall[i]<60 && overall[i]>=30)
        {
            letter[i]='C';
        }
        else
        {
            letter[i]='F';
        }
        printf("Student %d: Overall grade:%f\nLetter grade:%c\n",i+1,overall[i],letter[i]);
    }

    return 0;
}
