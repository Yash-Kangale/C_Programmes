#include<stdio.h>
#include<conio.h>
void main()
{ 
    int code;

    printf("\n1.ME \n2.MTECH \n3.BE \n4.BTECH \n5.DIPLOMA \n6.GRADUATE:");

    printf("\nEnter course code:");
    scanf("%d",&code);

    if(code==1 || code==2)
    { 
        printf("\nSelected for grade-A");
    }
     else
     if(code==3 || code==4)
    { 
        printf("\nSelected for grade-B");
    }
     else
     if(code==5 || code==6)
    { 
        printf("\nSelected for grade-C");
    }
     else
    { 
        printf("\nwrong keyboard");
    }
     getch();
}