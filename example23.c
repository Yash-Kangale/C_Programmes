#include<stdio.h>
#include<conio.h>
void main()
{ 
    int dn,sal;

    printf("\nEneter department number:");
    scanf("%d",&dn);

    switch(dn)
    { 
        case 10:
            sal=10000;
            break;
        case 20:
            sal=8000;
            break;
        case 30:
            sal=5000;
            break;
        default:
            sal=0;
            printf("\n Invalid Grade");
    }
     printf("\nSalary is:%d",sal);

     getch();
}