#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,even=0,odd=0;

    
    for(i=0; ; i++)
    {
        printf("enter the number");
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
        if(a[i]<0)
        {
            break;
        }
    }
    printf("\n Even number is :%d",even);
    printf("\n odd number is :%d",odd);
}    