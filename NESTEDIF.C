#include<stdio.h>;
#include<conio.h>;
void main(){
int a=80,b=40,c=90,d=150;
clrscr();
if(a>b)
{
    if(a>c)
    {
	if(a>d)
	   {
	   printf("a is greater");
	   }
	   else
	   {
	   printf("d is greater");
	   }
    }
     else
     {
	if(c>d)
	{
	printf("cx is greater");
	}
	else{
	    printf("d is greater");
	   }
     }
 }
else
{
      if(b>c)
      {
	 if(b>d)
	 {
	 printf("b is greater");
	 }
	 else
	 {
	 printf("d is greater");
	 }
       }
       else
       {
       printf("c is greater");
       }
}


getch();
}