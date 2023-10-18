#include<stdio.h>
#include<conio.h>
void main()
{
    struct student
    { 
        int roll_no;
        char name[10];
        float percent;
    }
    rec={101,"ajay",60.55};

    printf("\nRoll Number is: %d",rec.roll_no);
    printf("\nName is: %s",rec.name);
    printf("\nPercentage is: %f",rec.percent);

    getch();
}