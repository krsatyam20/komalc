#include<stdio.h>
#include<conio.h>
void main(){

int x;
clrscr();
printf("Please enter the number for table");
scanf("%d",&x);

int i=0;
do{
i++;
printf("\n%d * %d = %d ",x,i,x*i);

}while(i<10);

getch();
}