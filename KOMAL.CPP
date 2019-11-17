#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
//First Way create array
int x[5];
x[0]=10;
x[1]=20;
x[2]=30;
x[3]=40;
x[4]=50;

//Second Way create array
int y[5]={11,12,13,14,15};
printf("%d",x[4]);

for(int i=0;i<5;i++){
 printf("\nx[%d]= %d ",i,x[i]);


}

for(int j=0;j<5;j++){
printf("\ny[%d]= %d ",j,y[j]);
}

//WAP for get input from user and store in array
int user_input[5]; //create array with size 5


for(int k=0;k<5;k++){
printf("\nPlease enter the value of array user_input[%d]= ",k);
scanf("%d",&user_input[k]);
}


// Show the array value which is given by user;
printf("===Show the array value which is given by user====");
for(int n=0;n<5;n++){
printf("\nuser_input[%d]= %d",n,user_input[n]);
}
int m=0;

for(int p=1;p<5;p++)
{
printf("%d+",m);
m=m+p;
}

printf("=%d",m);


getch();
}