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
		cout << "[" << x << "," << y << "]" << endl;
	}
	//  add another vector
	void Add(double x1, double y1)
	{
		x += x1;
		y += y1;
	}
	//  Mulitple(Constant)
	void Multiple(double Constant)
	{
		x *= Constant;
		y *= Constant;
	}
};

int main()
{

	Vector Vec1, Vec2;
	Vec1.Set(3,5);
	Vec2.Set(1,1);
	Vec1.Add(2,2);
	Vec2.Multiple(5);
	Vec1.Show();
	Vec2.Show();
	return 0;
}

