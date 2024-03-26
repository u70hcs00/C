#include<iostream.h>
#define n 100
// 誤把常數放進來，變成 int 100
void Function(int m, int n)
{
	cout<<m<<endl<<n <<endl;
}
// 主程式
void main()
{
	Function(10,20);
}