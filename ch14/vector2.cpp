//P.5-16
#include<iostream>
using namespace std;

class Vector
{
private:
	double x;
	double y;
public:
	//----------------------
	//  Set(x1,x2)
	//  砞﹚秖﹍
	//  把计x1 : x
	//        y1 : y
	//----------------------
	void Set(double x1,double y1)
	{
		x=x1;
		y=y1;
	}
	//----------------------
	//  Show()
	//  陪ボ秖
	//----------------------
	void Show()
	{
		cout<<"["<<x<<","<<y<<"]"<<endl;
	}
	//----------------------
	//  Add(x1,y1)
	//  秖
	//  把计x1 : 秖 x 
	//        y1 : 秖 y 
	//  肚礚
	//----------------------
	void Add(double x1,double y1)
	{
		x+=x1;
		y+=y1;
	}
	void Add(Vector AnotherV)
	{
		x+=AnotherV.x;
		y+=AnotherV.y;
	}
	Vector RetAdd(Vector AnotherV)
	{	
		return Vector(x+AnotherV.x,y+AnotherV.y);
	}
	//----------------------
	//  Mulitple(Constant)
	//  盽计
	//  把计Constant:饼盽计
	//----------------------
	void Multiple(double Constant)
	{
		x*=Constant;
		y*=Constant;
	}

    friend Vector operator+(const Vector& v1, const Vector& v2)

	{

		return (Vector(v1.x+v2.x, v1.y+v2.y));

	}

		friend double xx(const Vector& v1)

	{

		return (v1.x);

	}

	friend double yy(const Vector& v1)

	{

		return (v1.y);

	}


	Vector(double i=0, double j=0)
	{
		x=i;
		y=j;
	}
};




inline ostream& operator<<(ostream& s, Vector& v)

{

	return (s<<'('<<xx(v)<<','<<yy(v)<<')');

}



//--------------------------
//  祘Α
//--------------------------
int main()
{
	Vector Vec1(1,2),Vec2(3,4);
	Vector Vec3(5,6),Vec4(7,8);

	(Vec1+Vec2).Show();
     Vec3 = Vec1 + Vec2;
	cout<<Vec3<<endl;
	system("pause");
	return 0;
}
