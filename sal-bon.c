/*WAP of salary and bonus of an employee and print the total using (if----else)*/

#include<stdio.h>
#include<conio.h>
main()
{
    double sal,bon,res;

    printf("\nEnter the Salary:");
    scanf("%lf",&sal);

    if(sal==5000)
    {
        bon=500;
    }
    else
    if(sal==10000)
    {
        bon=1000;
    }
    else
    if(sal==15000)
    {
        bon=1500;
    }
    else
    if(sal==20000)
    {
        bon=2000;
    }

    printf("\nBonus of the employee is:%lf\n",bon);

    res=sal+bon;

    printf("\nTotal Salary of employee is:%lf\n",res);
}