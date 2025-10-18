#include <iostream> 
using namespace std; 
// Template function to sort an array using Bubble Sort 
template <typename T> 
void sort(T a[], int n) 
{ 
T temp;   // temporary variable for swapping 
int i, j; 
for (i = 0; i < n - 1; i++) // loop for passes 
{ 
for (j = 0; j < n - 1 - i; j++) // loop for comparisons 
{ 
if (a[j] > a[j + 1]) // swap if elements are out of order 
{ 
temp = a[j]; 
a[j] = a[j + 1]; 
a[j + 1] = temp; 
} 
} 
} 
} 
// Template function  
template <typename T> 
void print(T a[], int n) 
{ 
for (int i = 0; i < n; i++) 
{ 
cout << a[i] << " ";  // print each element with space 
} 
cout << endl;  // new line after printing array 
} 
int main() 
{ 
// Arrays of different data types 
int a[5] = {12, 97, 34, 56, 3};         // integer array 
char c[5] = {'s', 'e', 'a', 'm', 'h'};  // character array 
float f[5] = {2.5, 14.7, 98.2, 23.2, 85.3}; // float array 
// Sort and print integer array 
sort(a, 5); 
print(a, 5); 
// Sort and print character array 
sort(c, 5); 
print(c, 5); 
// Sort and print float array 
sort(f, 5); 
print(f, 5); 
return 0; 
}
