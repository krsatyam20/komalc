#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int x[2][2];

printf("****find the min number in 2d array****\n");
for(int i=0;i<2;i++){
     for(int j=0;j<2;j++){
     printf("****please enter the value of x[%d][%d]****\n",i,j);
     scanf("%d",&x[i][j]);
     }
}

printf("****show 2d array value****\n");
for(int k=0;k<2;k++){
     for(int l=0;l<2;l++){
     printf("the value of x[%d][%d]=%d\n",k,l,x[k][l]);
     }
}

printf("****find the min number*****\n");
int min=0;
min=x[0][0];
 for(int m=0;m<2;m++){
     for(int n=0;n<2;n++){
      if(min<=x[m][n]){
	  min=x[m][n];
	}
    }
 }
printf("\n****min number is %d",min);
getch();


}