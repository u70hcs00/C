#include<iostream.h>
int nGlobal;   // �o�O�@�Ӿ����ܼ�
void Function()
{
	nGlobal=5;
}
void main()
{
	Function();
	cout<<nGlobal<<endl;
}
