//mulit-level inheritance
#include <iostream>
#include <string>
using namespace std;

class Students {
protected:
    string name;
    int rollNo;
public:   // public so derived classes can call
    void getst() {
        cout << "Enter name, roll number: ";
        cin >> name >> rollNo;
    }
    void showst() {
        cout << "Name = " << name << endl;
        cout << "Roll No = " << rollNo << endl;
    }
};

class Marks : public Students {
protected:
    int m1, m2, m3, m4, m5;
public:   // public so percentage class can use
    void getm() {
        getst();
        cout << "Enter marks of 5 subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }
};

class Percentage : public Marks {
public:
    float per;
    void getp() {
        getm();
        per = (float)(m1 + m2 + m3 + m4 + m5) / 5;
        showst();
        cout << "Percentage = " << per << endl;
    }
};

int main() {
    Percentage p;
    p.getp();   // corrected
    return 0;
}
