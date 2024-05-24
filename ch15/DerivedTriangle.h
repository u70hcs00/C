#include "GeometricObject.h"

class Triangle: public GeometricObject
{
 public:
  Triangle();
  Triangle(double side1, double side1, double side3);
  Triangle(double side1, double side1, double side3
          const string& color, bool filled);
  double getSide1() const;
  void setSide1(double);
  double getSide2() const;
  void setSide2(double);
  double getSide3() const;
  void setSide3(double);
  double getArea() const;
  double getPerimeter() const;
  string toString() const;
 
 private:
  double side1;
  double side2;
  double side3;
};

 

