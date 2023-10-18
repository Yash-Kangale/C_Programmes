#include<stdio.h>
#include<stdio.h>
void main()
{ 
    int a,b,l,m;
    for(a=1;a<=5;a++)
    { 
        for(b=1;b<=a;b++)
        { 
            printf("%d",b);
        }
        for(l=5;l<=a;l--)
        { 
            printf(" ");
        }
        for(m=1;m<=a;m++)
        { 
            printf("%d",m);
        }
        printf("\n");
    }
    getch();
}