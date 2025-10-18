// overloading of unary opertor using friend
#include<iostream>
using namespace std;
class unary
{
	int x,y,z;
	public:
		void get()
		{
			x=-20;
			y=-10;
			z=23;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
		friend void operator -(unary &u);
};
  void operator -(unary &u)
		{
			u.x=-u.x;
			u.y=-u.y;
			u.z=-u.z;
		}
int main()
{
	unary u;
	u.get();
	-u;
	u.show();
}
/*
OUTPUT:
x=20
y=10
z=-23
*/
