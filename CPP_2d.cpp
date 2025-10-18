// Program to calculate Area of Rectangle using Constructor Overloading
// Constructor Overloading: Multiple constructors with different parameter lists
// Depending on the arguments passed, the appropriate constructor is invoked

#include<iostream>
using namespace std;

class Rectangle {
    private:
        float length, breadth;   // Data members
    public:
        // Default constructor (no parameters)
        Rectangle() {
            length = 7.5;
            breadth = 6.5;
        }

        // Parameterized constructor with two arguments
        Rectangle(float x, float y) {
            length = x;
            breadth = y;
        }

        // Parameterized constructor with one argument (square case)
        Rectangle(float x) {
            length = x;
            breadth = x;
        }

        // Member function to calculate and display area
        void area() {
            cout << "Area of rectangle = " << length * breadth << endl;
        }
};

int main() {
    Rectangle r1;           // Calls default constructor
    Rectangle r2(4.5f);     // Calls single-parameter constructor (square)
    Rectangle r3(2.3f, 5.6f); // Calls two-parameter constructor

    // Displaying areas
    r1.area();
    r2.area();
    r3.area();

    return 0;	
}

