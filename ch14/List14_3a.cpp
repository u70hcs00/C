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

    Vector operator+(const Vector& v2);

    friend Vector operator+(const Vector& v1, const Vector& v2);
	friend double xx(const Vector& v1);
	friend double yy(const Vector& v1);

	Vector(double i = 0, double j = 0)
	{
		x = i;
		y = j;
	}
};
inline ostream& operator<<(ostream& s, Vector& v)
{
	return (s << '(' << xx(v) << ',' << yy(v) << ')');

}
Vector Vector::operator+(const Vector& v2)
{
	return (Vector(x+v2.x, y+v2.y));
}
Vector operator+(const Vector& v1, const Vector& v2)
{
   return (Vector(v1.x + v2.x, v1.y + v2.y));
}
double xx(const Vector& v1)
{
	return (v1.x);
}
double yy(const Vector& v1)
{
	return (v1.y);
}

int main()
{
	Vector Vec1(1,2), Vec2(3,4);
	Vector Vec3(5,6), Vec4(7,8);
    Vector Vec5;
	(Vec1 + Vec2).Show();
	Vec5 = Vec1 + Vec2;
	Vec5.Show();
	cout << Vec5 << endl;
	return 0;
}
