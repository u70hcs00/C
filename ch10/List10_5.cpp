#include <iostream>
#include <iomanip>
#include "CircleWithPrivateDataFields.h"
using namespace std;

// Add circle areas
double sum(Circle circleArray[], int size)
{
  // Initialize sum
  double sum = 0;

  // Add areas to sum
  for (int i = 0; i < size; i++)
    sum += circleArray[i].getArea();

  return sum;
}

// Print an array of circles and their total area
void printCircleArray(Circle circleArray[], int size)
{
  cout << setw(35) << left << "Radius" << setw(8) << "Area" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << setw(35) << left << circleArray[i].getRadius()
      << setw(8) << circleArray[i].getArea() << endl;
  }

  cout << "-----------------------------------------" << endl;

  // Compute and display the result
  cout << setw(35) << left << "The total area of circles is"
    << setw(8) << sum(circleArray, size) << endl;
}

int main()
{
  const int SIZE = 10;

  // Create a Circle object with radius 1
  Circle circleArray[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    circleArray[i].setRadius(i + 1);
  }

  printCircleArray(circleArray, SIZE);

  return 0;
}
