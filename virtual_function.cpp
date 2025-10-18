#include<iostream> 
using namespace std; 
class shapes 
{ 
 public: 
  // Pure virtual function  
  virtual void area()=0; 
}; 
// Rectangle class inheriting from shapes 
class Rectangle:public shapes 
{ 
 public: 
  int length, breadth; 
  // Constructor to initialize rectangle dimensions 
  Rectangle() 
  { 
   length = 90; 
   breadth = 60; 
  } 
  void area() 
  { 
                        cout << "Area of Rectangle is: " << length * breadth << endl; 
 } 
}; 
// Square class inheriting from shapes 
class Square:public shapes 
{ 
 public: 
  int side; 
  // Constructor to initialize square side 
  Square() 
  { 
   side = 6; 
  } 
  // Overridden function to calculate area of square 
  void area() 
  { 
   cout << "Area of Square is: " << side * side << endl; 
  } 
}; 
// Circle class inheriting from shapes 
class Circle:public shapes 
{ 
 public: 
  int radius; 
  // Constructor to initialize circle radius 
                          Circle() 
  { 
                               radius = 2; 
  } 
  // Overridden function to calculate "area" of circle 
  // (Note: this currently calculates circumference, not area) 
  void area() 
  { 
   cout << "Area of Circle is: " << 2 * 3.14 * radius << endl; 
  } 
}; 
// Triangle class inheriting from shapes 
class Triangle:public shapes 
{ 
 public: 
  int base, height; 
  // Constructor to initialize base and height 
  Triangle() 
  { 
   base = 10; 
   height = 5; 
  } 
  // Overridden function to calculate area of triangle 
  void area() 
  { 
   cout << "Area of Triangle is: " << 0.5 * base * height << endl; 
  } 
}; 
int main() 
{ 
 // Base class pointer to demonstrate polymorphism 
 shapes *ptr; 
 // Create objects of each shape 
 Rectangle r; 
 Square s; 
 Circle c; 
 Triangle t; 
 // Point to Rectangle object and call its area() 
 ptr = &r; 
 ptr->area(); 
 // Point to Square object and call its area() 
 ptr = &s; 
 ptr->area(); 
 // Point to Circle object and call its area() 
 ptr = &c; 
 ptr->area(); 
 // Point to Triangle object and call its area() 
 ptr = &t; 
 ptr->area(); 
 return 0; 
} 

