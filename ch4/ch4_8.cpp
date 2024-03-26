#include<iostream.h>



int Mul(int a=1, int b=1, int c=1)
{ 
	return a*b*c;
}

void main()
{
	cout<<Mul()<<endl;
	cout<<Mul(5)<<endl;
	cout<<Mul(5,3)<<endl;
	cout<<Mul(5,3,2)<<endl;
}