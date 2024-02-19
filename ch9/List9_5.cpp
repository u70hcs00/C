#include <iostream>
#include "Circle.h"
using namespace std;


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
