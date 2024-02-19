#include <iostream>
// CircleWithPrivateDataFields.h is defined in Listing 9.9
#include "CircleWithPrivateDataFields.h"
using namespace std;

void printCircle(Circle c)
{
  cout << "The area of the circle of "
    << c.getRadius() << " is " << c.getArea() << endl;
}

int main()
{
  Circle myCircle(5.0);
  printCircle(myCircle);

  return 0;
}
