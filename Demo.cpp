

using namespace std;
#include<iostream>

class Demo
{
  public:
         int x,y;
		 
		 Demo()
		 {
		   cout<<"Inside default constructor\n";
		 }
		 
		 Demo(int a,int b)
		 {
		   cout<<"Inside parameterized constructor\n";
		 }
		 ~Demo()
		 {
		   cout<<"Inside destructor\n";
		 }
		 
		 void fun()
		 {
		   cout<<"Inside fun\n";
	     }
};
int main()
{
  Demo *p = NULL;
  Demo *q = NULL;
  
  p = new Demo;
  cout<<"object created successfully with default\n";
  p->fun();
  delete p;
  
  q = new Demo(11,21);
  cout<<"object created successfully with parameterized \n";
  delete q;
  
  return 0;
  
}
  
  /*
  output 
  Inside default constructor
object created successfully with default
Inside fun
Inside destructor
Inside parameterized constructor
object created successfully with parameterized
Inside destructor
*/