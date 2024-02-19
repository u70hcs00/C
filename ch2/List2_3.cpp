#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter three numbers 
  double number1, number2, number3;
  cout << "Enter three numbers: ";
  cin >> number1 >> number2 >> number3;
  
  // Compute average
  double average = (number1 + number2 + number3) / 3;
  
  // Display result
  cout << "The average of " << number1 << " " << number2
   << " " << number3 << " is " << average << endl;

  return 0;
} 
