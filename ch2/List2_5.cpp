#include <iostream>
#include <limits>
#include <cfloat>
#include <iomanip>
using namespace std;

int main()
{
 cout << "INT_MIN is " << INT_MIN << endl;
 cout << "INT_MAX is " << INT_MAX << endl;
 cout << "LONG_MIN is " << LONG_MIN << endl;
 cout << "LONG_MAX is " << LONG_MAX << endl;
 cout << "FLT_MIN is " << FLT_MIN << endl;
 cout << "FLT_MAX is " << FLT_MAX << endl;
 cout << "DBL_MIN is " << DBL_MIN << endl;
 cout << "DBL_MAX is " << DBL_MAX << endl;
 cout << 1.322E5<<endl; 
 double number = 12.34567;
cout << setprecision(3) << number << " "
<< setprecision(4) << number << " "
<< setprecision(5) << number << " "
<< setprecision(6) << number << endl;
cout << fixed << 23.3575655E+2;

    return 0;
} 
