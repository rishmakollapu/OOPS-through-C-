/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	float r1,r2;
	cout<<"Enetr a,b,c values ";
	cin>>a>>b>>c;
	d= b*b-4*a*c;
	cout<<"discriminant="<<d;
	if(d==0)
	{
		r1=r2= ();
		cout<<"roots are equal r1 and r2 = "<<d;
	}
	return 0; 
}*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,R1,R2,d,rpart,ipart;
	cout<< "Enter coefficients a,b and c :";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if (d>0)
	{
		R1=(-b+sqrt(d))/(2*a);
		R2=(-b-sqrt(d))/(2*a);
		cout<< "Roots are real and different."<<endl;
		cout<<"R1="<<R1<<endl;
		cout<<"R2="<<R2<<endl;
	 } 
	else if (d==0)
	{
		R1=R2=(-b)/(2*a);
		cout<<"Roots are real and equal"<<endl;
		cout<<"R1=R2="<<R1<<endl;
	} 
	else
	{
		cout<<"Roots are imaginnary"<<endl;
	} 
	 cout<<"THANK YOU"<<endl;
	 return 0;
}
//output:
/*Enter coefficients a,b and c :
1
-2
1
Roots are real and equal
R1=R2=1
THANK YOU
Enter coefficients a,b and c :
1
-5
6
Roots are real and different.
R1=3
R2=2
THANK YOU
Enter coefficients a,b and c :
2
3
4
Roots are imaginnary
THANK YOU*/



