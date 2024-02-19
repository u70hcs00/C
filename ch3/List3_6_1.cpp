#include <iostream>
using namespace std;
 
int main()
{
  double x, y, z;
  cin >> x >> y >> z;

  cout << (x < y && y < z ? "sorted" : "not sorted") << endl;
  
  return 0;	  
}
