#include <iostream>
using namespace std;

class Circle
{
public:
  // The radius of this circle 
  double radius;
  
  // Construct a default circle object
//  Circle()
//  {
//    radius = 1;
//  }
   Circle(): radius(1) //Initializer list
   {
   }  
  // Construct a circle object
  Circle(double newRadius)
  {
    radius = newRadius;
  } 
   
  // Return the area of this circle
  double getArea()
  {
    return radius * radius * 3.14159;
  }
}; // Must place a semicolon here

int main()
{
  Circle circle1;
  Circle circle2(25);
  Circle circle3(125);
  
  cout << "The area of the circle of radius "
    << circle1.radius << " is " << circle1.getArea() << endl;
  cout << "The area of the circle of radius "
    << circle2.radius << " is " << circle2.getArea() << endl;
  cout << "The area of the circle of radius "
    << circle3.radius << " is " << circle3.getArea() << endl;

  // Modify circle radius
  circle2.radius = 100;
  cout << "The area of the circle of radius "
    << circle2.radius << " is " << circle2.getArea() << endl;
    
  cout << sizeof(circle1) << endl;
  cout << sizeof(circle2) << endl;  
  cout << "Area is " << Circle().getArea() << endl;  
  return 0;    
}
