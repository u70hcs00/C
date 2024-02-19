#include <iostream>
using namespace std;
 
void t1(); // Function prototype
 
int main()
{
 t1();
 t1();
 
 return 0;
}
 
void t1()
{
 static int x = 1;
 int y = 1;
 x++;
 y++;
 cout << "x is " << x << endl;
 cout << "y is " << y << endl;
}
