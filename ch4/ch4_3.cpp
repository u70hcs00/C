#include<iostream.h>
int nGlobal;   // 這是一個整體變數
void Function()
{
	nGlobal=5;
}
void main()
{
	Function();
	cout<<nGlobal<<endl;
}
