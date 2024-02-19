#include <iostream>
using namespace std;

int main()
{
 cout << "Enter a year: ";
 int year;
 cin >> year;
 
 // Check if the year is a leap year
 bool isLeapYear =
   (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
 
 // Display the result
 if (isLeapYear)
   cout << year << " is a leap year" << endl;
 else
   cout << year << " is a not leap year" << endl;
 
 return 0;
}
