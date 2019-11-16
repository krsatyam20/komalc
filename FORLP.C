#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
/*
 print a table of any number
2*1=2
2*2=4


*/


int n,i;
printf("Plese enter the any number which is you want to the print table ");
scanf("%d",&n);
for(i=1;i<=10;i++){

printf("\n%d * %d=  %d",n,i,n*i);

}






getch();
}