// Program to demonstrate Copy Constructor in C++
// A copy constructor initializes a new object as a copy of an existing object

#include<iostream>
using namespace std;

class sample {
    private:
        int x;   // private data member
    public:
        // Default constructor
        sample() {
            x = 45;
        }

        // Copy constructor (takes reference of another object)
        sample(sample &s1) {
            x = s1.x;   // copy value of x from s1
        }

        // Member function to display value of x
        void show() {
            cout << "x = " << x << endl;
        }
};

int main() {
    sample s1;      // Calls default constructor
    s1.show();      // Displays value of x

    sample s2(s1);  // Calls copy constructor (s2 gets value from s1)
    s2.show();      // Displays copied value of x

    return 0;
}

