#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int x[2][2];

/*x[0][0]=10;

x[0][1]=20;
x[1][0]=30;
x[1][1]=40;

printf("%d",x[0][0]); */

for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
	  printf("\nPlease enter the value of x[%d][%d]=",i,j);
	  scanf("%d",&x[i][j]);
	  }
 }
printf("*****Print 2d Array Value*****\n");

for(int k=0;k<2;k++){
	for(int l=0;l<2;l++){
	  printf("Please enter the value of x[%d][%d]=%d\n",k,l,x[k][l]);

	  }
 }

getch();
}