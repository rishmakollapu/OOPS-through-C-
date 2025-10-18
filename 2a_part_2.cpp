// Program to demonstrate Function Overloading in C++
// Different 'show()' functions are defined with different parameter types
// Same function name, but different argument lists (compile-time polymorphism)

#include<iostream>
using namespace std;

// Class containing overloaded 'show()' functions
class sample {
    public:
        void show() {
            cout << "Function with no parameters" << endl;
        }

        void show(int i) {
            cout << "Enter Integer value= " << i << endl;
        }

        void show(float f) {
            cout << "Floating value= " << f << endl;
        }

        void show(char c) {
            cout << "Character value= " << c << endl;
        }

        void show(char* s) {
            cout << "String value= " << s << endl;
        }

        void show(double d) {
            cout << "Double value= " << d << endl;
        }

        void show(bool b) {
            cout << "Boolean value= " << b << endl;
        }
};

int main() {
    sample s;   // Create object of class sample

    // Calling overloaded functions with different types of arguments
    s.show();                    // No parameter
    s.show("Harry Potter");       // String argument
    s.show('$');                 // Character
    s.show(2.34f);               // Float value
    s.show(45.67);               // Double value
    s.show(10);                  // Integer
    s.show(true);                // Boolean (true)
    s.show(false);               // Boolean (false)

    return 0;
}

