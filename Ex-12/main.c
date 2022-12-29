#include <stdio.h>
#include <stdlib.h>

int main()
{
    int roll_num,phy,chm,se,total,percent,rank;
    char first_name[20],second_name[20];
    printf("Input the roll number of the student: ");
    scanf("%d",&roll_num);
    printf("Input the first name of the student: ");
    scanf("%s",&first_name);
    printf("Input the second name of the student: ");
    scanf("%s",&second_name);
    printf("Input the marks of physics, chemistry and software engineering 101: ");
    scanf("%d %d %d",&phy,&chm,&se);
    total = phy + chm + se;
    percent = (phy + chm + se) / 3;
    if(percent >= 60)
    {
        rank = 1;
    }
    else if(percent < 60 && percent >= 48)
    {
        rank = 2;
    }
    else if(percent < 48 && percent >= 36)
    {
        rank = 3;
    }
    else if(percent < 36 && percent >= 24)
    {
        rank = 4;
    }
    else if(percent < 24 && percent >= 12)
    {
        rank = 5;
    }
    else if(percent < 12 && percent >= 0);
    {
        rank = 6;
    }
    printf("Roll No:%d\n",roll_num);
    printf("Student's Name:%s %s\n",first_name,second_name);
    printf("Marks in Physics:%d\n",phy);
    printf("Marks in Chemistry:%d\n",chm);
    printf("Marks in Software Engineering 101:%d\n",se);
    printf("Total:%d\n",total);
    printf("Percentage:%d\n",percent);
    printf("Rank:%d",rank);

    return 0;
}
