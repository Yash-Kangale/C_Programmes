#include<stdio.h>
#include<conio.h>
void main()
{ 
    struct student
    { 
        int rollno;
        char name[10];
        float percent;
    }rec;

    printf("\nEnter Roll no:");
    scanf("%d",&rec.rollno);

    printf("\nEnter Name:");
    scanf("%s",rec.name);

    printf("\nEnter Percentage:");
    scanf("%f",rec.percent);

    printf("\nRoll Number is:%d",rec.rollno);
    printf("\nName is:%s",rec.name);
    printf("\nPercentage is:%f",rec.percent);

    getch();
}