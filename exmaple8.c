#include<stdio.h>
#include<conio.h>
void main()
{
    struct holder
    {
        long int ac_no,mob_no,ini_bal;
        int age;
        char name[10];
    }rec;
 
     printf("\nEnter the Account Number: ");
     scanf("%ld",&rec.ac_no);

     printf("\nEnter the Mobile Number: ");
     scanf("%ld",&rec.mob_no);

     printf("\nEnter the initial Balnce: ");
     scanf("%ld",&rec.ini_bal);

     printf("\nEnter the Age: ");
     scanf("%d",&rec.age);

     printf("\nEnter the Name: ");
     scanf("%s",&rec.name);

     printf("\nAccount Number is: %ld",rec.ac_no);
     printf("\nMobile Number is: %ld",rec.mob_no);
     printf("\nInitial Balance is: %ld",rec.ini_bal);
     printf("\nAge is: %d",rec.age);
     printf("\nName is: %s",rec.name);

     getch();

}

