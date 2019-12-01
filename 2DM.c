#include<stdio.h>
#include<conio.h>
void main (){
clrscr();
int x[2][2];

printf("****find max number in 2d array");

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
       printf("\n please enter the value of x[%d][%d]=",i,j);
       scanf("%d",&x[i][j]);
      }
}

printf("****show 2d array value****\n");

for(int k=0;k<2;k++){
    for(int l=0;l<2;l++){
     printf("****find the value of x[%d][%d]=%d\n",k,l,x[k][l]);
     }
}

printf("****find the max number*****\n");
int max=0;
max=x[0][0];
 for(int m=0;m<2;m++){
    for(int n=0;n<2;n++){
       if(max<=x[m][n]){
	  max=x[m][n];
	}
    }
 }
printf("\n****max number is %d",max);
getch();
}
