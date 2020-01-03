#include<iostream.h>
#include<conio.h>
class a{
public:
   void add(int x,int y){
   int z;
   z=x+y
   cout<<z;
   }
 };

class b:public a{
   void sub(int a,int b){
   int c;
   c=a-b
   cout<<z;
   }
};
void main(){
clrscr();

b obj2;
obj2.sub(20,10);
obj.add(10,20);

getch();
}
