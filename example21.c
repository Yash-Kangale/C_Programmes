#include<stdio.h>
#include<conio.h>
void main()
{ 
    char ch;

    printf("Enter any character:");
    scanf("%s",&ch);

     if(ch>=65 && ch<=90)
    { 
        printf("Upper case charcter:");
    }
     else
     if(ch>=97 && ch<=122)
    { 
        printf("Lower case character:");
    }
     else
     {
         printf("Invalid character");
     }

     getch();

}