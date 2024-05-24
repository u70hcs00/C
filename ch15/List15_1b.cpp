#include<iostream>
#define PI 3.1416
using namespace std;
class Shape {
public:
  Shape (double i = 0, double j = 0) 
  {
    x = i;     
	y = j; 
  }
  double getX() { return x;}
  double getY() { return y;}
private:	
  double x, y;   // The starting point of a Shape
};

class Circle : public Shape   { //
public:
  Circle(double i, double j, double r1):Shape(i,j)
  { r = r1; }
   double getX() { return Shape::getX();}  // We use the same
   double getY() { return Shape::getY();}  // names of member
  double area();              // functions as in Shape
private:
  double r;          // These are private members of Circle
};

double Circle::area()
{
    return PI*r*r;
}          

int main()
{
   Circle c(0,0,5);
   cout << '(' << c.getX() << ',' << c.getY() << ')'<<endl;

   cout << "The area of circle c is " << c.area()<<endl;
	
	return 0;
}
