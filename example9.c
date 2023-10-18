#include<stdio.h>
#include<conio.h>
void solve()
{ 
    int first=10,second=20;
    int third=first+second;
    { 
        int third= second-first;
        printf("%d",third);
    }
    printf("%d",third);
}
int main()
{ 
    solve();
    return 0;
}