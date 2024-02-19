#include<iostream>
using namespace std;
#define PI 3.1416
int main()
{
	float fRadius;  // radius
	float fArea;    // area

	cout<<"Please input the radius¡G";
	cin>>fRadius;

	if(fRadius < 0){
		cout<<"Radius needs to be positive!"<<endl;
	}
	else{
		fArea = PI * fRadius * fRadius;
		cout << "area of the disk is " << fArea << endl;
	}
	system("pause");
	return 0;
}



