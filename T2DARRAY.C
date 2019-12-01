#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int user_input[2][2];

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
    printf("\nplease enter the value of 2d array user_input[%d][%d]=",i,j);
    scanf("%d",&user_input[i][j]);
    }
}

printf("=show the total 2d array value which is given by user=");
int n=0;
for(int k=0;k<2;k++){
    for(int l=0;l<2;l++){
    n=n+user_input[k][l];
    }
}
printf("=%d",n);

getch();
}d