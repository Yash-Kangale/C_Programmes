#include<stdio.h>
#include<conio.h>
void main()
{ 
    int n[2][5];

    printf("enter the roll no. and percentage: 1st student: ");
    scanf("%d %d",&n[0][0],&n[0][1]);

    printf("enter the roll no. and percentage: 2nd student: ");
    scanf("%d %d",&n[1][0],&n[1][1]);

    printf("enter the roll no. and percentage: 3rd student: ");
    scanf("%d %d",&n[2][0],&n[2][1]);

    printf("enter the roll no. and percentage: 4th student: ");
    scanf("%d %d",&n[3][0],&n[3][1]);

    printf("enter the roll no. and percentage: 5th student: ");
    scanf("%d %d",&n[4][0],&n[4][1]);

    printf("\n Roll no.                  Percentage");
    printf("\n %d                       %d",n[0][0],n[0][1]);
    printf("\n %d                       %d",n[1][0],n[1][1]);
    printf("\n %d                       %d",n[2][0],n[2][1]);
    printf("\n %d                       %d",n[3][0],n[3][1]);
    printf("\n %d                       %d",n[4][0],n[4][1]);

    getch();
}