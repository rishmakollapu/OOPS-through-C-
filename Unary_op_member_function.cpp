// unary operator using member function
#include<iostream>
using namespace std;
class unary
{
	int x,y,z;
	public:
		void get()
		{
			x=10;
			y=-30;
			z=-23;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
		void operator -()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
int main()
{
	unary u;
	u.get();
	-u;//u.operator-()
	u.show();
}
