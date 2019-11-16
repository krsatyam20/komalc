#include<stdio.h>
#include<conio.h>

void main(){
int x,i;

clrscr();
printf("Please enter the number when u want to stope loop");
scanf("%d",&x);
for(i=1;i<10;i++)
  {
     if(i==x)
       {
       break; // terminate the loop at fixed stepse
       }
    printf("%d",i);
  }// close loop



getch();
}// close main