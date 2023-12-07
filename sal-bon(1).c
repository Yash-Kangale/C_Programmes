/*WAP the salary is given find bonus and print the total of the employee using (if using and operator)*/

#include<stdio.h>
#include<conio.h>
main()
{
    double sal,bon,res;

    printf("\nEnter the Salary of the employee:");
    scanf("%lf",&sal);

    if(sal<10000)
    {
        bon=500;
    }
    else
    if(sal>=10000 && sal<20000)
    {
        bon=1000;
    }
    else
    if(sal>=20000 && sal<30000)
    {
        bon=2000;
    }
    else
    if(sal>30000)
    {
        bon=3000;
    }

    printf("\nBonus of the employee is:%lf",bon);

    res=sal+bon;

    printf("\nFinal Salary of the employee is:%lf",res);
}