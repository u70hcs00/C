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
	friend class Circle;
};
double Vector::OriX = 1;
double Vector::OriY = 1;

class Quad // List10_3a.cpp
{
 private:
	Vector Vec1; // Object Composition
	Vector Vec2;
 public:
	Quad() // A default constructor
	: Vec1(0,0), Vec2(0,0) {}
	void Set(Vector v1, Vector v2){
		Vec1 = v1;
		Vec2 = v2;}
	void Show()
	{
		Vec1.Show();
		Vec2.Show(); 
		}	
};

class Circle // List10_3a.cpp
{
 private:
	Vector Vec1; // Object Composition
	double radius;
 public:
	Circle() // A default constructor
	: Vec1(0,0), radius(0) {}
	Circle(Vector v1, double r) // A default constructor
	: Vec1(v1), radius(r){}
	void Set(Vector v1, double r1){
		Vec1 = v1;
		radius = r1;}
	void Show()
	{
		cout<< "Center is ";
		Vec1.Show();
		cout << Vec1.x << endl;
		cout << "Radius is " << radius <<endl;
		}		
};



int main()
{
    // You do not need an instance to use static functions
    Vector::ShowOri();
	Vector V(5,4);
	V.SetOri(2,2);
	// V.ShowOri();
	Vector::ShowOri();
	V.Show();
    Quad Quad1;
    Quad1.Set(V,V);
    Quad1.Show();
    
    Circle Cir1(V,5);
    Cir1.Show();
    
    
	return 0;
}
