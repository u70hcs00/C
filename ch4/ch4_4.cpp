//P4-9
#include<iostream.h>
void Function()
{
	//  �ݤ���nGlobal
	nGlobal=5;
}
int nGlobal;   //  �b�o�@��H�᪺�~�ݱo��nGlobal
void main()
{
	Function();
	cout<<nGlobal<<endl;
}
