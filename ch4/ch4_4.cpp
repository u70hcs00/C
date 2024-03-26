//P4-9
#include<iostream.h>
void Function()
{
	//  看不到nGlobal
	nGlobal=5;
}
int nGlobal;   //  在這一行以後的才看得到nGlobal
void main()
{
	Function();
	cout<<nGlobal<<endl;
}
