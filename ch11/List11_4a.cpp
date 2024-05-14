#include<iostream>
using namespace std;
class Circle{
public:
   double radius;
   Circle(): radius(1){}  
  // Construct a circle object
  Circle(double newRadius){
    radius = newRadius;} 
  // Return the area of this circle
  double getArea(){
    return radius * radius * 3.14159;}
}; // Must place a semicolon here
int main()
{
	int N;
	cout << "Input number of Circles:";
	cin >> N;
	Circle* pC = new Circle[N];
	for( int i = 0; i < N; i++){
		pC[i].radius = i*1.0;
	    cout << "The area of the pC[" << i << "] is "
		     << (*(pC + i)).getArea() << endl;
//  The same as	   pC[i].getArea()	 
	    cout << "The area of the pC[" << i << "] is "
		     << (pC + i)->getArea() << endl;
    }
}
