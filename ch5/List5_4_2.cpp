//  巢狀迴圈的範例：九九乘法表
#include<iostream>
using namespace std;

int main()
{
     int i,j;
     for(j=1;j<=5;j++)         //  外部迴圈
     {

		 for(i=1;i<=5-j;i++)	   //  內部迴圈
			 cout<<'\t';
		 for(i=5-j+1;i<=5+j-1;i+=2)
		 {//  內部迴圈
			 cout<<'\t'<<i<<'*'<<j<<'='<<i*j<<'\t';
		 }

		 cout<<endl;
     }
     for(j=6;j<=9;j++)         //  外部迴圈
     {

		 for(i=1;i<=j-5;i++)	   //  內部迴圈
			 cout<<'\t';
		 for(i=j-5+1;i<=5-j+9;i+=2)	   //  內部迴圈
			 cout<<'\t'<<i<<'*'<<j<<'='<<i*j<<'\t';
		 cout<<endl;
     }
	system("pause");
	return 0;
}