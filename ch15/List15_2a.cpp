#include<iostream>
using namespace std;
class Shape {
public:
  Shape (double i = 0, double j=0) 
  {
    x = i;     
	y = j; 
  }
  double getX() { return x;}
  double getY() { return y;}
protected:	
  double x, y;   // The starting point of a Shape
};

class Rectangle : public Shape   { //
public:
  Rectangle(double i, double j, double k, double l)
  { Shape::x = i, Shape::y = j, x = k; y = l; }
  double getX() { return x;}  // We use the same
  double getY() { return y;}  // names of member
  double area();              // functions as in Shape
private:
  double x,y;          // These are private members of Rectangle
};

double Rectangle::area()
{
 //return (x - Shape::getX()) * (y - Shape::getY());
 return (x - Shape::x) * (y - Shape::y);
}          

int main()
{
  Rectangle r(0,0,3,5);
  cout << '(' << r.getX() << ',' << r.getY() << ')'<<endl;

  cout << "The area of rectangle r is " << r.area()<<endl;
	
	return 0;
}
