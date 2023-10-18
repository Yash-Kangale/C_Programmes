#include<stdio.h>
#include<conio.h>
void main()
{ 
    long int bm,dis,tax,total;

    printf("Enter the Bill Amount is: ");
    scanf("%ld",&bm);

    if(bm<=500)
    { 
        dis=00;
        tax=50;
    }
    else
    if(bm>=500 && bm<5000)
    { 
        dis=100;
        tax=200;
    }
    else
    if(bm>=5000 && bm<10000)
    { 
        dis=500;
        tax=350;
    }
    else
    if(bm>=10000)
    { 
        dis=1000;
        tax=550;
    }
    total=bm-dis+tax;

    printf("\nDiscount is: %ld",dis);
    printf("\nTax is: %ld",tax);
    printf("\nTotal is: %ld",total);

    getch();
}