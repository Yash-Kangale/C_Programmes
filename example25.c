#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter the Number:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("Even Number");
    }
    if(a%2!=0)
    {
        printf("Odd Number");
    }
    getch();
}