/*
Data:is a just like raw material
Types of data

Number
	integer===>int====>%d  (0-9)
	float=====>float==>%f
	double====>
string
	char==>char===>%c  (single latter with couts 'a'/"a" )
	string==>string ==>%c (combination of char "komal"

 variable: is a memory location where we can store our value


*/

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
//int a=10; //hear a is an varibale which is hold value 10
//int b=20;
int a,b;
a=10;
b=20;
float c= 10.1;
double d =10.12;
char e='k';


printf("value of a and b(integer type) = %d %d\n",a,b) ;

printf("value of c(float type) = %f\n",c) ;


printf("value of a(double type) = %d",d) ;


printf("value of a(char type) = %c",e) ;

getch();



}

