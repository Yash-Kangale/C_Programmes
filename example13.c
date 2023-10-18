#include<stdio.h>
#include<conio.h>
void main()
{ 
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    if(a>b)
    { 
        goto large;
    }
    else
    {
        goto small;
    }
    large: 
        printf("%d:Largest and %d:Smallest",a,b);
        goto end;
    small:
        printf("%d:Largest and %d:Smallest",b,a);
        goto end;
    end: 
    getch();
}