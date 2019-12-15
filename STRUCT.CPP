#include<sdtdio.h>
#include<conio.h>
#include<string.h>
struct student{
int rollno;
char *name;


}komal,s;


void main(){
clrscr();
komal.rollno=50;
s.rollno=40;
struct student k;

printf("%d",komal.rollno);

printf("%d",s.rollno);
k.rollno=100;
printf("%d\n",k.rollno);

k.name="kumar";
printf("%s",k.name);


struct student de[2];

for(int i=1;i<=2;i++){
 printf("Please enter the rollno:");
 scanf("%d",&de[i].rollno);

}

for(int j=1;j<=2;j++){
 printf(" \nThe rollno:%d",de[j].rollno);


}
getch();
}