#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades[10];
    int i;
    float avg_grade;
    float sum=0;
    for(i=0;i<10;i++)
    {
        printf("Student%d's grade: ",i+1);
        scanf("%d",&grades[i]);
        sum = sum + grades[i];
    }
    avg_grade = sum / 10.0;
    int Acount=0;
    int Bcount=0;
    int Ccount=0;
    int Dcount=0;
    int Fcount=0;
    for(i=0;i<10;i++)
    {
        if(grades[i]>=90)
        {
            printf("Student%d's letter grade is A\n",i+1);
            Acount++;
        }
        else if(grades[i]<=89 && grades[i]>=80)
        {
            printf("Student%d's letter grade is B\n",i+1);
            Bcount++;
        }
        else if(70<=grades[i] && grades[i]<=79)
        {
            printf("Student%d's letter grade is C\n",i+1);
            Ccount++;
        }
        else if (60<=grades[i] && grades[i]<=69)
        {
            printf("Student%d's letter grade is D\n",i+1);
            Dcount++;
        }
        else if(grades[i]<=59)
        {
            printf("Student%d's letter grade is F\n",i+1);
            Fcount++;
        }
    }
    printf("A:%d\nB:%d\nC:%d\nD:%d\nF:%d\n",Acount,Bcount,Ccount,Dcount,Fcount);
    printf("Average grade is %.2f",avg_grade);

    return 0;
}
