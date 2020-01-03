#include<iostream.h>
#include<conio.h>
class a{
public:
   void add(int x,int y){
   int z;
   z=x+y;
   cout<<z;
   }
};

class b:public a{
public:
   void sub(int a,int b){
   int c;
   c=a-b;
   cout<<c;
   }
};

class c:public b{
public:
   void msg(char k)
   {
   cout<<k;
}

void main(){
clrscr();
c obj2;
obj2.sub(20,10);
obj2.add(10,10);
obj2.msg('a');

getch();

}