#include <iostream>
using namespace std;
 
int main()
{
  // Prompt the user for input
  int seconds;
  cout << "Enter an integer for seconds: ";
  cin >> seconds;
  int minutes = seconds / 60;
  int remainingSeconds = seconds % 60;
  cout << seconds << " seconds is " << minutes <<
    " minutes and " << remainingSeconds << " seconds " << endl;
	
  return 0;
} 
