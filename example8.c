#include<stdio.h>
#include<conio.h>
void main()
{ 
    int i,j,s,n;
    printf("Enter n Value:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    { 
        for(s=0;s<i;s++)
            printf("");
        for(j=0;j<2*(n-i)-1;j++)
            printf("%d",i+1);
            printf("\n");
    }
}
