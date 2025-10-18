#include <iostream>
#include <string>
using namespace std;

// Base Class
class Students {
protected:
    string name;
    int rollNo;
public:
    void getStudentInfo() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void showStudentInfo() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

// Derived Class 1 from Students
class Marks : virtual public Students {
protected:
    int m1, m2;
public:
    void getMarks() {
        cout << "Enter marks of Subject 1: ";
        cin >> m1;
        cout << "Enter marks of Subject 2: ";
        cin >> m2;
    }

    void showMarks() {
        cout << "Marks - Subject 1: " << m1 << ", Subject 2: " << m2 << endl;
    }
};


// Derived Class 3 from Students
class Sabl : virtual public Students {
protected:
    int m3;
public:
    void getSablMarks() {
        cout << "Enter marks of Subject 3: ";
        cin >> m3;
    }

    void showSablMarks() {
        cout << "Marks - Subject 3(SABL): " << m3 << endl;
    }
};

// Multipath Derived Class
class Percentage : public Marks, public Sabl {
public:
    void calculatePercentage() {
        int total = m1 + m2 + m3 ;
        float percentage = (total / 4.0);
        showStudentInfo();
        showMarks();
        showSablMarks();
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Percentage p;
    p.getStudentInfo();
    p.getMarks();
    p.getSablMarks();
   

    cout << "\n--- Student Report ---\n";
    p.calculatePercentage();

    return 0;
}//Multi path
