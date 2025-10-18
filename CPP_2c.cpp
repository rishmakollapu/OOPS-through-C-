// Program to demonstrate Constructor and Destructor in C++
// Constructor is called automatically when object is created
// Destructor is called automatically when object goes out of scope
// Destructor name is same as class name but prefixed with '~'

#include<iostream>
using namespace std;

class sample {
    public:
        // Constructor
        sample() {
            cout << "Constructor is invoked" << endl;
        }
        // Destructor
        ~sample() {
            cout << "Destructor is invoked" << endl;
        }
};
int main() {
    sample s1, s2, s3;// Creating three objects
}

