#include<stdio.h>
#include<conio.h>
void main()
{ 
    int cod;

    printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Dividation");

    printf("\nEnter the code:");
    scanf("%d",&cod);

    if(cod==1)
    { 
        addtwo();
    }
    else
    if(cod==2)
    { 
        subtwo();
    }
    else
    if(cod==3)
    { 
        multwo();
    }
    else
    if(cod==4)
    { 
        divtwo();
    }
     getch();
}
     addtwo()
    { 
        int a,b,add;
        printf("Enter two no.:");
        scanf("%d %d",&a,&b);
        add=a+b;
        printf("\nAddition is:%d",add);
    }
     subtwo()
    { 
        int a,b,sub;
        printf("Enter two no.:");
        scanf("%d %d",&a,&b);
        sub=a-b;
        printf("\nSubtraction is:%d",sub);
    }
     multwo()
    { 
        int a,b,mul;
        printf("Enter two no.:");
        scanf("%d %d",&a,&b);
        mul=a*b;
        printf("\nMultiplication is:%d",mul);
    }
    divtwo()
    { 
       int a,b,div;
        printf("Enter two no.:");
        scanf("%d %d",&a,&b);
        div=a/b;
        printf("\nDivision is:%d",div); 
    }