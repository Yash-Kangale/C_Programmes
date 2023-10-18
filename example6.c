#include<stdio.h>
#include<conio.h>
void main()
{ 
    long int sal,bon,total;

    printf("Enter the salary is: ");
    scanf("%ld",&sal);

     
    if(sal<=10000)
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
    if(sal>=30000)
    { 
        bon=3000;
    }
    total=sal+bon;

    printf("\nEnter the Bonus is: %ld",bon);
    printf("\nTotal is: %ld",total);

    getch();
}
