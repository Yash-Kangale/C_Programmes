/*WAP to enter the Grade and the Salary,Bonus,Tax and print the Total*/

#include<stdio.h>
#include<conio.h>
main()
{
    double sal,bon,tax,res;
    char gr;

    printf("\nGrade    Salary  Bonus  Tax");
    printf("\n A       50000   5000   1500");
    printf("\n B       40000   4000   2500");
    printf("\n C       30000   3000   3500");
    printf("\n D       20000   2000   4500\n");
    
    printf("\nEnter the Garde:\n");
    scanf("%c",&gr);

    if(gr=='a')
    {
        sal=50000;
        bon=5000;
        tax=1500;
    }
    else
    if(gr=='b')
    {
        sal=40000;
        bon=4000;
        tax=2500;
    }
    else
    if(gr=='c')
    {
        sal=30000;
        bon=3000;
        tax=3500;
    }
    else
    if(gr=='d')
    {
        sal=20000;
        bon=2000;
        tax=4500;
    }

    printf("\nSalary is:%lf",sal);
    printf("\nBonus is:%lf",bon);
    printf("\nTax is:%lf",tax);

    res=sal-bon+tax;

    printf("\nTotal is:%lf",res);

    getch();
}