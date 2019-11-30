#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int x[5];

printf("********find min number in array********\n");

   for(int i=0;i<=5;i++){
       printf("\nplease enter the value of x[%d]=",i);
       scanf("%d",&x[i]);
       }

printf("********show array value********\n");

   for(int j=0;j<=5;j++){
       printf("find the value of x[%d]=%d\n",j,x[j]);
       }

printf("********find min number********\n");
int min=0;
min=x[0];
     for(int k=0;k<=5;k++){
	if(min>=x[k]){
	 min=x[k];
	  }
      }
printf("********min numberis=%d ",min);


getch();

}