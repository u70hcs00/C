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
	friend double xx(const Vector& v1)
	{
		return (v1.x);
	}
	friend double yy(const Vector& v1)
	{
		return (v1.y);
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
	Vector(double i=0, double j=0)
	{
		x=i;
		y=j;
	}
    friend Vector operator+(const Vector& v1, const Vector& v2)
	{
		return (Vector(v1.x+v2.x, v1.y+v2.y));
	}

	friend class Quad;
};
class Quad
{
private:
	Vector Vec1;
	Vector Vec2;
public:
//	void Add(Quad OtherQuad)
//	{	
//		Vec1=Vec1.RetAdd(OtherQuad.Vec1);
//		Vec2=Vec2.RetAdd(OtherQuad.Vec2);
//	}
	void Add(Quad OtherQuad)
	{
		Vec1.x+=OtherQuad.Vec1.x;
		Vec1.y+=OtherQuad.Vec1.y;
		Vec2.x+=OtherQuad.Vec2.x;
		Vec2.y+=OtherQuad.Vec2.y;
	}
	void Show()
	{
		Vec1.Show();
		Vec2.Show();
	}
	void Set(Vector v1, Vector v2)
	{
		Vec1=v1;
		Vec2=v2;
	}
	friend Vector v1(const Quad& q)
	{
		return (q.Vec1);
	}
    friend Vector v2(const Quad& q)
	{
		return (q.Vec2);
	}

     friend Quad operator+(const Quad& q1, const Quad& q2)
	{
		return (Quad(q1.Vec1+q2.Vec1,q1.Vec2+q2.Vec2));
	}

	Quad(Vector v1, Vector v2)	
		: Vec1(v1), Vec2(v2) {}
	
	Quad()
		: Vec1(0,0), Vec2(0,0) {}



};
inline ostream& operator<<(ostream& s, Vector& v)
{
	return (s<<'('<<xx(v)<<','<<yy(v)<<')');
}




inline ostream& operator<<(ostream& s, Quad& q)
{
	return (s<<'('<<xx(v1(q))<<','<<yy(v1(q))<<','<<xx(v2(q))<<','<<yy(v2(q))<<')');
}

//--------------------------
int main()
{
	Vector Vec1(1,2),Vec2(3,4);
	Vector Vec3(5,6),Vec4(7,8);
	Quad Quad5(Vec1,Vec2);
	Quad Quad1,Quad2;
	//Vec1.Show();
	//Vec2.Show();
	//(Vec1+Vec2).Show();
	cout<<Vec1<<endl;
	Quad1.Set(Vec1,Vec2);
	Quad2.Set(Vec3,Vec4);
	Quad1.Add(Quad2);
	//Quad2.Show();
	//Quad1.Show();
    cout<<Quad1<<endl;
	cout<<Quad2<<endl;
	cout<<(Quad1+Quad2)<<endl;

	//cout<<Quad1<<endl;
	
     
	system("pause");
	return 0;
}
