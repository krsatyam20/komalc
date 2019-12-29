#include<iostream.h>
#include<conio.h>

class calculation {

   public:
   //first function for add
   void add(int a,int b)
       {
	int c;
	c=a+b;
	cout<<c;
	}
      // Second function for message
      void msg(char k)
      {
       cout<<k;
      }
      // Third Function For Subtraction
      int sub(int x,int y){
       int z;
       z=x-y;

      return z;
      }

};

void main(){
clrscr();
// create a object of calcualtion class
calculation obj;
obj.add(10,20);
obj.msg('a');
cout<<obj.sub(20,10);

getch();
}