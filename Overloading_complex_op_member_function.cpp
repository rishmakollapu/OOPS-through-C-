//overloading complex operator using member function
#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		void data()
		{
			cout<<"enter real,imaginary values=";
			cin>>real>>imag;
		}
		void operator +(complex c2)
		{
			cout<<real+c2.real<<"+"<<imag+c2.imag<<"i";
		}
};
int main()
{
    complex c1,c2;
    c1.data();
    c2.data();
    c1+c2;//c1.operator +(c2)
	}
