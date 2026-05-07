#include <iostream>
#include "CircleWithCopyConstructor.h"

using namespace std;

int main()
{
  Circle* pCircle1 = new Circle(5);

  cout << "Number of circle objects created: "
       << Circle::getNumberOfObjects() << endl;

  // Use copy constructor
  Circle Np(*pCircle1);

  cout << "Area of copied object: "
       << Np.getArea() << endl;

  cout << "Number of circle objects created: "
       << Circle::getNumberOfObjects() << endl;

  delete pCircle1;

  cout << "After deleting pCircle1: "
       << Circle::getNumberOfObjects() << endl;

  return 0;
}
