#include<iostream>
using namespace std;
#define PI 3.1416
#define ERROR_MESSAGE cout<<"Radius needs to be positive!"<<endl
#define AREA(R)   (PI*R*R)
int main()
{
	float fRadius;  // radius
	float fArea;    // area

	cout<<"Please input the radius¡G";
	cin>>fRadius;

	if(fRadius < 0){
		ERROR_MESSAGE;
	}
	else{
		fArea = AREA(fRadius);
		cout << "area of the disk is " << fArea << endl;
	}
	system("pause");
	return 0;
}



