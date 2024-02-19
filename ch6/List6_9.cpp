#include <iostream>
using namespace std;
 
inline void f(int month, int year)
{
  cout << "month is " << month << endl;
  cout << "year is " << year << endl;
}

int main()
{ 
  int month = 10, year = 2008; 
  f(month, year); // Invoke inline function  
  f(9, 2010); // Invoke inline function
  
  return 0;
} 
