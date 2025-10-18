//volume of cube using single inheritance 
#include <iostream>
#include <string>
using namespace std;
class A {
protected:
    int n;
    void get() {
        n=3;
    }
};
class B :public A {
public:
    void cube() {
        get();
        cout << "(Single inheritance) Volume of cube="<<n*n*n;
    }
};
int main() {
    B b;
    b.cube();
}
