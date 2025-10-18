// sum of 2 num using inline
#include<iostream>
using namespace std;
inline int sum(int x,int y)
{
	return(x+y);
}
int main()
{
	// int a,b;
	// cout<<"Enter two values";
	//cin>>a>>b>>endl;
	//int s=sum(a,b);
	//cout<<"Sum of two numbers is ="<<s;
	cout<<"Sum of two numbers is ="<<sum(10,20);
	return 0;
}
