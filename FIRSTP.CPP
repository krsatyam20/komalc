#include<iostream.h>
#include<conio.h>

void main(){
clrscr();
int age;
cout<<"\n enter your age:";
cin>>age;

if(age>=18){
cout<<"you are eligible in license"<<endl;
}
else{
 cout<<"You Are not eligible for license"<<endl;
}

for(int i=0;i<10;i++){
cout<<i<<endl;
}

getch();
}