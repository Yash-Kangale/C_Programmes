/*WAP the salary is given find bonus,tax and print the total of the employee using (if using and operator)*/

#include<stdio.h>
#include<conio.h>
main()
{
    double sal,dis,tax,res;

    printf("\nEnter the Salary of the employee:");
    scanf("%lf",&sal);

    if(sal<500)
    {
        dis=00;
        tax=50;
    }
    else
    if(sal>=500 && sal<5000)
    {
        dis=100;
        tax=200;
    }
    else
    if(sal>=5000 && sal<10000)
    {
        dis=500;
        tax=350;
    }
    else
    if(sal>10000)
    {
        dis=1000;
        tax=550;
    }

    printf("\nDiscount amount of the employee is:%lf",dis);
    printf("\nTax amount of the employee is:%lf",tax);

    res=sal-dis+tax;

    printf("\nTotal amount of the employee is:%lf",res);
    getch();
}