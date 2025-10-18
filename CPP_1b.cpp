#include<iostream>   // Header file for input/output
using namespace std;

// Function to calculate factorial of a number using recursion
int factorial(int n)
{
    // Base case: factorial of 1 is 1
    if(n==1)
        return 1;
    else
        // Recursive case: n * factorial of (n-1)
        return (n*factorial(n-1));
}
int main()
{
    int x;  // Variable to store user input
    
    cout<<"Enter x value: ";  // Prompt message to user
    cin>>x;  // Take input from user
    
    // Display factorial result
    cout<<"Factorial of "<<x<<" is: "<<factorial(x);
}

