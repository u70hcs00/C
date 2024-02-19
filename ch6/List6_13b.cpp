#include <iostream>
using namespace std;
 
void increment(int *n)
{
  *n = *n + 1;
  cout << "\tn inside the function is " << *n << endl;
  cout << "value of n " << n << endl;
  cout << "address of n " << &n << endl;
}
 
int main()
{ 
  int x = 1;
  cout << "Before the call, x is " << x << endl;
  increment(&x);
  cout << "after the call, x is " << x << endl;
  
  cout << "address of x " << &x << endl;
  
  return 0;
} 
