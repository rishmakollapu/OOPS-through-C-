#include <iostream> 
using namespace std; 
// Template class with two type parameters (T1, T2) 
template <class T1, class T2> 
class sample 
{ 
private: 
T1 x; // first data member of type T1 
T2 y; // second data member of type T2 
public: 
// Function to input values of x and y 
void get() 
{ 
cin >> x >> y;
}
// Function to display values of x and y 
void show() 
{ cout << "x=" << x << " " << "y=" << y << endl; 
} 
}; 

int main() 
{ 
// Object with int and float types 
sample<int, float> s1; 
cout << "Enter int, float value: "; 
s1.get();   // input values 
s1.show();  // display values 
// Object with char and int types 
sample<char, int> s2; 
cout << "Enter char, int value: "; 
s2.get();   // input values 
s2.show();  // display values 
// Object with float and char types 
sample<float, char> s3; 
cout << "Enter float, char value: "; 
s3.get();   // input values 
s3.show();  // display values 
return 0; // program ends 
}
