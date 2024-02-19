//p.6-24
//  ¶Ç§}¨ç¼Æ-----½d¨Ò¤G
#include<iostream>
using namespace std;

void Swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
	cout<<"In Swap:"<<'\t';
	cout<<*a<<'\t'<<*b<<endl;
}
int main()
{
	int a=5,b=3;
	cout<<"Before Swap:"<<'\t';
	cout<<a<<'\t'<<b<<endl;
	Swap(&a,&b);
	cout<<"After Swap:"<<'\t';
	cout<<a<<'\t'<<b<<endl;
	system("pause");
	return 0;
}
 
