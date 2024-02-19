#include<iostream>
using namespace std;
class Vector
{
 private:
	double x;
	double y;
 public:
	void Set(double x1, double y1)
	{
		x = x1;
		y = y1;
	}
	void Show()
	{
		cout << "[" << x << "," 
		            << y << "]" << endl;
	}
	void Add(double x1, double y1)
	{
		x += x1;
		y += y1;
	}
	void Add(Vector AnotherV)
	{
		x += AnotherV.x;
		y += AnotherV.y;
	}
	Vector RetAdd(Vector AnotherV)
	{	
		return Vector(x + AnotherV.x, y + AnotherV.y);
	}
	void Multiple(double Constant)
	{
		x *= Constant;
		y *= Constant;
	}

    Vector operator+(const Vector& v2)
	{
		return (Vector(x + v2.x, y + v2.y));
	}
	Vector(double i = 0, double j = 0)
	{
		x = i;
		y = j;
	}
};
int main()
{
	Vector Vec1(1,2), Vec2(3,4);
    Vec1.Add(Vec2);
	Vec1.Show();
	Vector Vec3 = Vec1.RetAdd(Vec2);
	Vec3.Show();
	return 0;
}
