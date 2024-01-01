#include<stdio.h>
#include<conio.h>
main()
{
    int n[3][4];
    clrscr();

    printf("Enter the Salary and Bonus of 1st Employee:");
    scanf("%d %d",&n[0][0],&n[0][1]);
    n[0][2]=n[0][0]+n[0][1];
    printf("\nTotal is:%d",n[0][2]);

    printf("Enter the Salary and Bonus of 1st Employee:");
    scanf("%d %d",&n[1][0],&n[1][1]);
    n[1][2]=n[1][0]+n[1][1];
    printf("\nTotal is:%d",n[1][2]);

    printf("Enter the Salary and Bonus of 1st Employee:");
    scanf("%d %d",&n[2][0],&n[2][1]);
    n[2][2]=n[2][0]+n[2][1];
    printf("\nTotal is:%d",n[2][2]);

    printf("Enter the Salary and Bonus of 1st Employee:");
    scanf("%d %d",&n[3][0],&n[3][1]);
    n[3][2]=n[3][0]+n[3][1];
    printf("\nTotal is:%d",n[3][2]);

    printf("Enter the Salary and Bonus of 1st Employee:");
    scanf("%d %d",&n[4][0],&n[4][1]);
    n[4][2]=n[4][0]+n[4][1];
    printf("\nTotal is:%d",n[4][2]);

    printf("Enter the Salary and Bonus of 1st Employee:");
    scanf("%d %d",&n[5][0],&n[5][1]);
    n[5][2]=n[5][0]+n[5][1];
    printf("\nTotal is:%d",n[5][2]);

    printf("\n      Salary      Bonus       Total");
    printf("\n      %d          %d          %d",n[0][0],n[0][1],n[0][2]);
    printf("\n      %d          %d          %d",n[1][0],n[1][1],n[1][2]);
    printf("\n      %d          %d          %d",n[2][0],n[2][1],n[2][2]);
    printf("\n      %d          %d          %d",n[3][0],n[3][1],n[3][2]);
    printf("\n      %d          %d          %d",n[4][0],n[4][1],n[4][2]);
    printf("\n      %d          %d          %d",n[5][0],n[5][1],n[5][2]);

    getch();
}