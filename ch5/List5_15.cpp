#include <iostream>
using namespace std;
 
int main()
{
  int sum = 0; 
  int number = 0;
  
  while (number < 20)
  {
  	number++;
  	if (number == 10 || number == 11)
  	  continue;
  	sum += number;
  }
  
  cout << "The sum is " << sum << endl;
  
  return 0;
}
