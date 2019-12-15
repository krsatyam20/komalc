#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student{
int rollno;
char *name;
char *address;

}komal,s;

void main(){
clrscr();
komal.rollno=50;
s.rollno=40;
printf("%d\n",komal.rollno);
printf("%d\n",s.rollno);

komal.address="uttam nagar";
s.address="Tilak Nagar";
printf("%s\n",komal.address);
printf("%s\n",s.address);

komal.name="kohli";
s.name="komal";
printf("%s\n",komal.name);
printf("%s\n",s.name);








getch();
}