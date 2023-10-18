#include<conio.h>
#include<stdio.h>
void main()
{ 
    int i,j;

    for(i=65;i<=70;i++)//row
    { 
        for(j=65;j<=i;j++)//column
        { 
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}