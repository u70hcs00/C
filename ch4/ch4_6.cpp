#include<iostream.h>
#define TEST
void main()
{
#if defined(TEST)
	cout <<"TEST已被定義"<<endl;
#else
	cout <<"TEST未被定義"<<endl;
	cout <<"也可以放兩個以上的敘述"<<endl;
#endif
}