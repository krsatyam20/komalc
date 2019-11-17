#include<stdio.h>
#include<conio.h>
void main(){
clrscr();

int user_input[5];


for(int i=0;i<5;i++){
printf("\nPlease enter the value of array user_input[%d]= ",i);
scanf("%d",&user_input[i]);
}

printf("=Show the total array value which is given by user=");
int n=0;

for(int j=0;j<5;j++)
{

n=n+user_input[j];
}
printf("=%d",n);

getch();
}