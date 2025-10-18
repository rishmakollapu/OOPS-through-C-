//hierarchical inheritance 
#include <iostream>
#include <string>
using namespace std;
class A {
  public:
  	A()
  	{
  		cout<<"Class of A constructor is invovled"<<endl;
	  }
	  ~A()
  	{
  		cout<<"Class of A destructor is invovled"<<endl;
	  }
};
class B :public A {
public:
   B()
  	{
  		cout<<"Class of B constructor is invovled"<<endl;
	  }
	  ~B()
  	{
  		cout<<"Class of B destructor is invovled"<<endl;
	  }
};
class C :public A {
public:
   C()
  	{
  		cout<<"Class of C constructor is invovled"<<endl;
	  }
	  ~C()
  	{
  		cout<<"Class of C destructor is invovled"<<endl;
	  }
};
int main() {
	cout<<"Heirarchial inheritance"<<endl;
    B b;
    C c;
}
