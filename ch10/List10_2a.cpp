#include<iostream>
using namespace std;
class Vector
{
 private:  //List10_2a.cpp 
	double x, y;  // coordinate (x, y)
	static double OriX, OriY; // origin
 public:
	Vector(double x1 = 0, double y1 = 0)
	{
		x = x1;
		y = y1;		
	}
	void Show() //const
	{
		cout << "[" << x + OriX << "," 
		            << y + OriY << "]" << endl;
		      //    << ++y + OriY << "]" << endl;
		      // wrong
	}
	static void SetOri(double orix = 0, double oriy = 0)
	{
		OriX = orix;
		OriY = oriy;
	}
	static void ShowOri()
	{
		cout << "[" << OriX << "," 
		            << OriY << "]" << endl;
		// static function can only access static variables
		//  cout << "[" << x << "," << y << "]" << endl;
		//wrong
	}
};
double Vector::OriX = 1;
double Vector::OriY = 1;
int main()
{
    // You do not need an instance to use static functions
    Vector::ShowOri();
	Vector V(5,4);
	V.SetOri(2,2);
	// V.ShowOri();
	Vector::ShowOri();
	V.Show();

	return 0;
}
