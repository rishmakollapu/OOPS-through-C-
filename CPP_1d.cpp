#include<iostream> 
  // header file for input-output
using namespace std;
// Define a class 'employee'
class employee
{
    private:
        string name;  
// employee name (private data member)
        int eid;     
 // employee id (private data member)
        float sal;   
  // employee salary (private data member)
    public:
        // Function to input employee details
        void get()
        {
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Id: ";
            cin >> eid;
            cout << "Enter Salary: ";
            cin >> sal;
        }
        // Function to display employee details
        void show()
        {
            cout << "Employee Name = " << name << endl;
            cout << "Employee Id   = " << eid << endl;
            cout << "Salary        = " << sal << endl;

        }
};
int main()
{
    // create two employee objects
    employee e1, e2 ;
    // input details for both employees
    e1.get();
    e2.get();
    // display details of employee 1
    cout << "Details of Employee 1:" << endl;
    e1.show();
    // display details of employee 2
    cout << "Details of Employee 2:" << endl;
    e2.show();
    return 0; 
// successful termination

}

