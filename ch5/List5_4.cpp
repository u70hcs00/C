//  �_���j�骺�d�ҡG�E�E���k��
#include<iostream>
using namespace std;

int main()
{
     int i,j;
     for(j=1;j<=5;j++)         //  �~���j��
     {

		 for(i=1;i<=5-j;i++)	   //  �����j��
			 cout<<'\t';
		 for(i=5-j+1;i<=5+j-1;i+=2)
		 {//  �����j��
			 cout<<'\t'<<i<<'*'<<j<<'='<<i*j<<'\t';
		 }

		 cout<<endl;
     }
     for(j=6;j<=9;j++)         //  �~���j��
     {

		 for(i=1;i<=j-5;i++)	   //  �����j��
			 cout<<'\t';
		 for(i=j-5+1;i<=5-j+9;i+=2)	   //  �����j��
			 cout<<'\t'<<i<<'*'<<j<<'='<<i*j<<'\t';
		 cout<<endl;
     }
	system("pause");
	return 0;
}