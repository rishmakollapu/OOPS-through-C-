#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		void data()
		{
			cout<<"enter real,imag values";
			cin>>real>>imag;
		}
		friend	void operator +(complex &c1,complex &c2);
};
	void operator +(complex &c1,complex &c2)
		{
			cout<<c1.real+c2.real<<"+"<<c1.imag+c2.imag<<"i";
		}
int main()
{
    complex c1,c2;
    c1.data();
    c2.data();
    c1+c2;//c1.operator +(c1,c2)
	}
