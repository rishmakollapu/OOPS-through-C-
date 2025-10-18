// Program to demonstrate Friend Function in C++
// A friend function can access private data of a class
// It is declared using the keyword 'friend' inside the class

#include<iostream>
using namespace std;

class Demo {
    private:
        int x;    // private data member
    public:
        void get() {
            x = 80;    // initialize x
        }
        // Friend function declaration
        // Can access private member 'x'
        friend void sum(Demo &d);
};

// Friend function definition (not a member of class)
void sum(Demo &d) {
    int y = 45;
    // Accessing private member 'x' directly using object
    cout << "Addition of x and y is = " << d.x + y;
}

int main() {
    Demo d;     // create object
    d.get();    // initialize private variable x
    sum(d);     // call friend function
}

