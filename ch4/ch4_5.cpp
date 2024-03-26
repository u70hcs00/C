//P4-10
#include<iostream.h>
int Multiple(int A,int B)
{
	cout<<"Int Multiple"<<endl;
	return A*B;
}
float Multiple(float A,float B)  
{
	cout<<"Float Multiple"<<endl;
	return A*B;
}
void main()
{
	int nInt1=2,nInt2=3;
	float fFloat1=4.5,fFloat2=2.5;
	cout<<Multiple(nInt1,nInt2)<<endl;
    cout<<Multiple(fFloat1,fFloat2)<<endl;
}
