#include<stdio.h>
#include<conio.h>
#include<pointer.h>

void main()
{
    union employee
    { char grade;
      int salary;
    }emp;
    union employee*emp;

    emp->grade='A';
    printf("\n Employee Number is: %c",emp->grade);

    emp->salary=2000;

    printf("\nSalary is: %d",emp->salary);

    getch();
}