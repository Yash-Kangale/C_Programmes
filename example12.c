#include<stdio.h>
#include<conio.h>
void main()
{ 
    union stu
 { 
     int roll_no;
     float per;
 }rec;
  rec.roll_no=101;
  
  printf("\nRoll number is:%d",rec.roll_no);

  rec.per=66.66;
  printf("\nPercentage is:%f",rec.per);

  getch();

}
  