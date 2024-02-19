#include<iostream>
using namespace std;


int main()
{
  int num1, num2;
  cout << "Compute the GCD of two positive integers\n";
  cout << "Please input the first integer¡G";
  cin >> num1;
  cout << "Please input the second integer¡G";
  cin >> num2;

  int a, b = num2, c = num1 % num2;  // c is the reminder 
                                //  after the first division

  while (c!=0) {                 // when reminder equals to 0 ,
    a = b;                         // b is the GCD
    b = c;
    c = a % b;                       // Euclidean algorithm,take the reminder
  }

  cout << "The greatest common divisor for " << a << " and "
       << b << " is " << b << endl;
	system("pause");
	return 0;
}
