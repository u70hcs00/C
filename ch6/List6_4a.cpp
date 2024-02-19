#include<iostream>
using namespace std;
#define PI 3.1416
void ShowErrorMsg()
{
	cout<<"Radius needs to be positive!"<<endl;
	return;
}
float CalcArea(float fRadius)
{
	float fArea = PI * fRadius * fRadius;
	return fArea;
}
int main()
{
	float fRadius;  
	float fArea;    

	cout<<"Please input the radius¡G";
	cin>>fRadius;
    if(fRadius < 0)
		ShowErrorMsg();
	else
	{
		fArea = CalcArea(fRadius);
		cout << "Area is " << fArea << endl;
	}
	system("pause");
	return 0;
}



