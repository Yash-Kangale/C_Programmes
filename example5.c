#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,sum,sub,div,mul;
    float avg;

    printf("Enter the first number is: ");
    scanf("%d",&n1);

    printf("Enter the second number is: ");
    scanf("%d",&n2);

    sum=n1+n2;
    sub=n1-n2;
    div=n1/n2;
    mul=n1*n2;
    avg=(n1+n2)/3;

    printf("\nAddition is: %d",sum);
    printf("\nSubtraction is: %d",sub);
    printf("\nDivision is: %d",mul);
    printf("\nMultiplication is: %d",mul);
    printf("\nAverage is: %f",avg);

    getch();

}